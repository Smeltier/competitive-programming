#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

const ll INF = 1e18;

ll V, E;
bool flag = false;
vector <vector <ll>> graph;
vector <vector <ll>> adj;
vector <bool> vis;
vector <ll> loop;

void dfs (int src) {
    if (src == V) flag = true;
    
    vis[src] = true;
    for (auto &v : adj[src]) 
        if (not vis[v]) 
            dfs(v);
}

ll bellman_ford (int src) {
    vector <ll> dist (V + 1, -INF);

    dist[src] = 0;

    for (int i = 0; i < V; ++i) {
        for (auto &edge : graph) {
            int u = edge[0],
                v = edge[1],
                w = edge[2];

            if (dist[u] != -INF and dist[u] + w > dist[v]) {
                dist[v] = dist[u] + w;

                if (i == V - 1) {
                    loop.push_back(u);
                    loop.push_back(v);
                }
            }
        }
    }

    cerr << "Distâncias: ";
    for (auto path : dist)
        cerr << path << " ";
    cerr << endl;

    return dist[V];
}

int main () { fast_io
    cin >> V >> E;

    adj.resize(V + 1);
    vis.assign(V + 1, false);

    ll a, b, c;
    for (int i = 1; i <= E; ++i) {
        cin >> a >> b >> c;
        graph.push_back({a, b, c});
        adj[a].push_back(b);
    }

    ll ans = bellman_ford(1);

    for (auto &v : loop)
        if (not vis[v]) 
            dfs(v);

    cout << (flag ? -1 : ans) << endl;

    return 0;
}