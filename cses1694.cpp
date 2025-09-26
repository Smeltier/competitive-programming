#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

ll n, m;
vector <vector <ll>> capacity;
vector <vector <ll>> adj; 

ll bfs(vector <ll> & parent, ll source, ll sink) {
    queue <ll> q;
    q.push(source);

    while (not q.empty()) {
        int node = q.front();
        q.pop();

        for (auto son : adj[node]) {
            ll w = capacity[node][son];
            if (w <= 0 or parent[son] != -1)
                continue;

            parent[son] = node;
            q.push(son);
        }
    }

    return parent[sink] != -1;
}

ll max_flow(ll source, ll sink) {
    ll flow = 0, n = (int) adj.size();
    vector <ll> parent (n, -1);

    while (bfs(parent, source, sink)) {
        ll node = sink;

        ll curr_flow = LLONG_MAX;
        while (node != source) {
            curr_flow = min(curr_flow, capacity[parent[node]][node]);
            node = parent[node];
        }

        node = sink;
        while (node != source) {
            capacity[parent[node]][node] -= curr_flow;
            capacity[node][parent[node]] += curr_flow;
            node = parent[node];
        }

        flow += curr_flow;
        fill(parent.begin(), parent.end(), -1);
    }

    return flow;
}

int main(){ fast_io
    cin >> n >> m;

    capacity.assign(n, vector <ll> (n, 0));
    adj.assign(n, vector <ll> ());

    int a, b, c;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b >> c;
        --a; --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        capacity[a][b] += c;
    }

    cout << max_flow(1, n) << endl;

   return 0;
}