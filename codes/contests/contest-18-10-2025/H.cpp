#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const ll INF = 1e18;

ll V, E;
vector <vector <pair <ll,ll>>> adj;
vector <ll> dist;
vector <ll> parent;
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
                parent[v] = u;
                q.push({-dist[v], v});
            }
        }
    }
}

int main(){ fast_io
    cin >> V >> E;

    adj.resize(V + 1);
    dist.assign(V + 1, INF);
    visited.assign(V + 1, false);
    parent.assign(V + 1, -1);

    int a, b, w;
    for (int i = 1; i <= E; ++i) {
        cin >> a >> b >> w;

        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    dijkstra(1);

    if(dist[V] == INF) {
        cout << -1 << endl;
        return 0;
    }

    vector <ll> path;
    for (ll v = V; v != -1; v = parent[v])
        path.push_back(v);

    reverse(path.begin(), path.end());

    for (ll v : path)
        cout << v << " ";
    cout << "\n";

    return 0;
}