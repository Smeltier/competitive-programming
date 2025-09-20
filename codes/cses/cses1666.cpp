#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int n, m;
int cnt = 0;
vector <vector<int>> mat;
vector <int> vis;

void dfs(int num){
    vis[num] = cnt;
    for(auto c : mat[num])
        if(vis[c] == -1)
            dfs(c);
}

int main(){ fast_io
    cin >> n >> m;

    mat.resize(n + 1);
    vis.assign(n + 1, -1);

    int a, b;
    for(int i = 0; i < m; ++i){
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    vector<int> ans;
    for(int i = 1; i <= n; ++i){
        if(vis[i] == -1){
            dfs(i);
            cnt++;
            ans.push_back(i);
        }
    }

    cout << cnt - 1 << endl;
    for(size_t i = 0; i < ans.size() - 1; ++i)
        cout << ans[i] << " " << ans[i + 1] << endl;

    return 0;
}