#include <bits/stdc++.h>

using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n, m;
pair<int, int> start, end_point;
vector<string> grid;
vector<vector<bool>> visited;
vector<vector<pair<int, int>>> parent;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

string create_path() {
    string path = "";
    pair<int, int> curr = end_point;

    while (curr != start) {
        pair<int, int> prev = parent[curr.first][curr.second];

        int diff_x = curr.first - prev.first;
        int diff_y = curr.second - prev.second;

        if (diff_x == 0 && diff_y == 1) path += 'R';
        else if (diff_x == 0 && diff_y == -1) path += 'L';
        else if (diff_x == 1 && diff_y == 0) path += 'D';
        else if (diff_x == -1 && diff_y == 0) path += 'U';

        curr = prev;
    }

    reverse(path.begin(), path.end());
    return path;
}

string dijkstra() {
    queue<pair<int, int>> q;
    q.push(start);
    visited[start.first][start.second] = true;

    while (!q.empty()) {
        pair<int, int> curr = q.front();
        q.pop();

        if (curr == end_point) {
            return create_path();
        }

        for (int d = 0; d < 4; ++d) {
            int x = curr.first + dx[d];
            int y = curr.second + dy[d];

            if (x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && grid[x][y] != '#') {
                visited[x][y] = true;
                parent[x][y] = curr;
                q.push({x, y});
            }
        }
    }

    return "NO";
}

int main() {
    fast_io;

    cin >> n >> m;

    grid.resize(n);
    visited.resize(n, vector<bool>(m, false));
    parent.resize(n, vector<pair<int, int>>(m));

    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 'A') start = {i, j};
            if (grid[i][j] == 'B') end_point = {i, j};
        }
    }

    string result_path = dijkstra();
    
    if (result_path == "NO") {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << result_path.size() << endl;
        cout << result_path << endl;
    }

    return 0;
}