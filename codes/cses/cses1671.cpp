#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const ll INF = 1e18; // const ll INF = 1e18 para LL

ll n, m;
vector <vector <pll>> adj;
vector <bool> visited;
vector <ll> dist;

void dijkstra(ll s) {
    visited.assign(n+1, false);
    dist.assign(n+1, INF);

    priority_queue <pll> q;  
    q.push({0, s});
    dist[s] = 0;

    while (!q.empty()) {
        ll u = q.top().second;
        q.pop();

        if (visited[u]) continue;
        visited[u] = true;

        for (auto [v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                q.push({-dist[v], v});
            }
        }
    }
}

int main(){ fast_io
    cin >> n >> m;

    adj.resize(n + 1, vector <pll>());

    ll a, b, c;
    for(int i = 0; i < m; ++i){
        cin >> a >> b >> c;

        adj[a].push_back({b, c});
    }

    dijkstra(1);

    for(auto &d : dist){
        if(d == INF) continue;
        cout << d << " ";
    }
    cout << endl;

    return 0;
}