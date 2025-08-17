//    Caminho das Pontes - Neps 297 (by Smeltier)
//    https://neps.academy/br/exercise/297

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
vector<int> dist; 
vector<bool> mark;
vector<vector<pii>> grafo;

// vector <vector <pii>> adj;
// vector <bool> mark;
// vector <int> dist;

void dijkstra(int s) {
    mark.assign(n+2, false);
    dist.assign(n+2, INF);


    priority_queue <pii> q;  
    q.push({0, s});
    dist[s] = 0;


    while (!q.empty()) {
        int u = q.top().second;
        q.pop();


        if (mark[u]) continue;
        mark[u] = true;


        for (auto [v, w] : grafo[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                q.push({-dist[v], v});
            }
        }
    }
}


int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> m;

    grafo.resize(n+2);

    for(int i = 0; i < m; i++){
        int s, t, b; 
        cin >> s >> t >> b;
        grafo[s].pb({t,b});
        grafo[t].pb({s,b});
    }

    dijkstra(0);

    for(auto d : dist)
        cerr << d << " ";
    cerr << endl;
    
    cout << dist[n+1] << endl;

}