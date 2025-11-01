#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int n, m;
vector <vector <int>> adj;
vector <bool> vis;
vector <int> vet;

void bfs (int start = 0) {
    vis.assign(n, false);
    vet.assign(n, -1);

    queue <int> q;
    q.push(start);
    vis [start] = true;

    while (not q.empty()) {
        int curr = q.front();
        q.pop();

        for (auto child : adj[curr]) {
            if (vis[child]) continue;

            q.push(child);
            vis[child] = true;
            vet[child] = curr;
        }
    }
}

int main () { fast_io
    cin >> n >> m;

    adj.resize(n);

    int a, b;
    for (int i = 1; i <= m; ++i) {
        cin >> a >> b;
        a--; b--;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs();

    if (not vis[n - 1]) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    vector <int> ans;

    int curr = n - 1;
    while(curr != 0) {
        ans.push_back(curr);
        curr = vet[curr];
    }
    ans.push_back(curr);
    reverse(ans.begin(), ans.end());

    cout << (int) ans.size() << endl;
    for (auto &it : ans)
        cout << it + 1 << " ";

    return 0;
}