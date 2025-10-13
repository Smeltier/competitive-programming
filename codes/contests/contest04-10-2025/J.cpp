#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int n;
vector <vector <int>> mt;

void bfs() {
    queue <pair <int,int>> q;
    mt[0][0] = 0;
    q.push({0, 0});

    int dx[] = {1, 2, 2, 1, -1, -2, -2, -1},
        dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

    while(not q.empty()) {
        pair <int, int> curr = q.front();
        q.pop();

        for(int i = 0; i < 8; ++i) {
            int X = dx[i] + curr.first,
                Y = dy[i] + curr.second;

            if(X >= 0 and Y >= 0 and X < n and Y < n and mt[X][Y] == -1) {
                mt[X][Y] = mt[curr.first][curr.second] + 1;
                q.push({X, Y});
            }
        }
    }
}

int main(){ fast_io
    cin >> n;

    mt.assign(n, vector <int> (n, -1));

    bfs();

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << mt[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}