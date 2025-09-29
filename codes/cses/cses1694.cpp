#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

vector <vector <ll>> adj;
vector <vector <ll>> cap;

    ll edmond_karp(ll source, ll sink) {
        int n = adj.size();
        vector <ll> parent (n, -1);

        // Lambda Function -> BFS
        auto reachable = [&]() -> bool {
            queue <ll> q;
            q.push(source);

            while(not q.empty()) {
                int node = q.front(); q.pop();

                for(auto son : adj[node]) {
                    ll w = cap[node][son];

                    if(w <= 0 or parent[son] != -1)
                        continue;
                    
                    parent[son] = node;
                    q.push(son);
                }
            }
            return parent[sink] != -1;
        };

        ll flow = 0;
        while(reachable()) {
            ll curr = LLONG_MAX;

            ll node = sink;
            while(node != source) {
                curr = min(curr, cap[parent[node]][node]);
                node = parent[node];
            }

            node = sink;
            while(node != source) {
                cap[parent[node]][node] -= curr;
                cap[node][parent[node]] += curr;
                node = parent[node];
            }

            flow += curr;

            fill(parent.begin(), parent.end(), -1);
            parent[source] = -2;
        }

        return flow;
    }

int main(){ fast_io
    int n, m;
    cin >> n >> m;

    adj.resize(n);
    cap.assign(n, vector <ll> (n, 0));

    int a, b, c;
    for(int i = 0; i < m; ++i) {
        cin >> a >> b >> c;

        --a; --b;

        adj[a].push_back(b);
        adj[b].push_back(a);

        cap[a][b] += c;
    }

    cout << edmond_karp(0, n - 1) << endl;

    return 0;
}