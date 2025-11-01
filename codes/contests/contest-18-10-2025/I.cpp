#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const ll INF = 1e18;

ll V, E;
vector <vector <pair <ll,ll>>> adj;
vector <ll> dist;
vector <bool> visited;

void dijkstra(ll s) {
    priority_queue <pair <ll,ll>> q;  
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
    int tc;
    cin >> tc;

    while(tc--) {
        cin >> V >> E;

        adj.assign(V + 1, {});
        visited.assign(V+1, false);
        dist.assign(V+1, INF);

        int a, b, w;
        for (int i = 1; i <= E; ++i) {
            cin >> a >> b >> w;
            adj[a].push_back({b, w});
        }

        int x, y;
        cin >> x >> y;

        dijkstra(x);
        ll ans = dist[y];

        if(ans == INF) cout << "NO" << endl;
        else cout << ans << endl;
    }

    return 0;
}