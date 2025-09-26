#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105; 
const int MAXDAY = 205;

int n, D;
vector<int> adj[MAXN];
vector<int> match;
vector<bool> vis;

bool dfs(int u) {
    for (int v : adj[u]) {
        if (vis[v]) continue;
        vis[v] = true;
        if (match[v] == -1 || dfs(match[v])) {
            match[v] = u;
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> D;
    vector<int> d(n);
    for (int i = 0; i < n; i++) cin >> d[i];

    for (int i = 0; i < n; i++) {
        int di = d[i];
        if (di >= D) adj[i].push_back(di - D);
        adj[i].push_back(di + D);
    }

    match.assign(MAXDAY, -1);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        vis.assign(MAXDAY, false);
        if (dfs(i)) ans++;
    }

    cout << ans << "\n";
    return 0;
}
