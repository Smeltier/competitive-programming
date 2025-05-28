//    Flight Discount - Cses 1195 (by Smeltier)
//    https://cses.fi/problemset/task/1195

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi vector<ll>
#define vll vector<ll>
#define endl "\n"

typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pii;

const ll maxn = 1e5+10;
const ll INF = 1e18 + 10;

ll n, m;
vector<vector<pii>> lista1;
vector<vector<pii>> lista2;

vector<ll> dijkstra(ll s, vector<vector<pii>> &vet){
    vector<bool> mark;
    vector<ll> dist;
    dist.assign(n+2, INF);
    mark.assign(n+2, false);

    priority_queue<pii> fila;
    fila.push({0,s});
    dist[s] = 0;

    while(!fila.empty()){
        ll u = fila.top().S; fila.pop();
        if(mark[u]) continue;
        mark[u] = true;

        for(auto [v, w] : vet[u]){
            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                fila.push({-dist[v], v});
            }
        }
    }
    return dist;
}

int main(){

    cin >> n >> m;

    lista1.resize(n+2);
    lista2.resize(n+2);

    vector<tuple<int,int,int>> cities;
    for(ll i = 0; i < m; i++){
        ll a, b, c;
        cin >> a >> b >> c;
        lista1[a].pb({b,c});
        lista2[b].pb({a,c});

        cities.pb({a,b,c});
    }

    vector<ll> dist1 = dijkstra(1, lista1);
    vector<ll> dist2 = dijkstra(n, lista2);

    ll ans = INF;
    for(auto [a,b,w] : cities){
        ans = min(ans, dist1[a] + dist2[b] + w / 2);
    }
    cout << ans << endl;

}