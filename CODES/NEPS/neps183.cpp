#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define endl "\n"

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

const int maxn = 1e5+10;
const int INF = 1e9 + 10;

int n, m;
vector<vector<pii>> ilhas;
vector<bool> mark;
vector<int> dist;

void dijkstra(int s){
    dist.assign(n+2, INF);
    mark.assign(n+2, false);

    priority_queue<pii> fila;
    fila.push({0,s});
    dist[s] = 0;

    while(!fila.empty()){
        int u = fila.top().S; fila.pop();
        if(mark[u]) continue;
        mark[u] = true;

        for(auto [v, w] : ilhas[u]){
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                fila.push({-dist[v], v});
            }
        }
    }
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> m;

    ilhas.resize(n+2);
    for(int i = 0; i < m; i++){
        int u, v, p;
        cin >> u >> v >> p;
        ilhas[u].pb({v,p});
        ilhas[v].pb({u,p});
    }

    int s; cin >> s;
    dijkstra(s);

    int minD = INT_MAX, maxD = INT_MIN;
    for(auto &d: dist){
        if(d != INF && d != 0){
            minD = min(minD, d);
            maxD = max(maxD, d);
        }
        cerr << d << " ";
    }
    cerr << endl;

    cout << maxD - minD << endl;

}