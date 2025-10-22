#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

typedef long long ll;
const ll INF = 1e18;

int V, E, X = -1;
vector<vector<ll>> graph;
vector<ll> parent;

void bellman_ford() {
    vector<ll> dist(V + 1, 0);
    parent.assign(V + 1, -1);

    for (int i = 0; i < V; ++i) {
        X = -1;
        
        for (auto &edge : graph) {
            int u = edge[0], 
                v = edge[1], 
                w = edge[2];

            if (dist[u] + w < dist[v]) {
                dist[v] = max(-INF, dist[u] + w);
                parent[v] = u;
                X = v;
            }
        }
    }
}

int main() {
    fast_io

    cin >> V >> E;
    graph.reserve(E);

    for (int i = 0; i < E; ++i) {
        ll a, b, c;
        cin >> a >> b >> c;
        graph.push_back({a, b, c});
    }

    bellman_ford();

    if (X == -1) {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0; i < V; ++i)
        X = parent[X];

    vector<ll> cycle;
    for (int v = X;; v = parent[v]) {
        cycle.push_back(v);
        if (v == X && cycle.size() > 1)
            break;
    }

    reverse(cycle.begin(), cycle.end());

    cout << "YES" << endl;
    for (auto v : cycle)
        cout << v << " ";
    cout << endl;

    return 0;
}