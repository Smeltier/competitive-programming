//    Counting Rooms - Cses 1192 (by Smeltier)
//    https://cses.fi/problemset/task/1192

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int n, m;
vector <vector <char>> mat;
vector <vector <bool>> vis;

void dfs(int i, int j){
    vis[i][j] = true;

    int dx[] = {0, 0, 1, -1},
        dy[] = {1, -1, 0, 0};

    for(int d = 0; d < 4; ++d){
        int x = i + dx[d],
            y = j + dy[d];

        if(x >= 0 and x < n and y >= 0 and y < m and mat[x][y] == '.' and not vis[x][y])
            dfs(x, y);
    }
}

int main(){ fast_io
    cin >> n >> m;

    mat.assign(n, vector<char>(m, '#'));
    vis.assign(n, vector<bool>(m, false));
    
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> mat[i][j];
        
    int rooms = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(mat[i][j] == '.' and not vis[i][j]){
                dfs(i, j);
                rooms++;
            }
        }
    }
        
    cout << rooms << endl;

    return 0;
}