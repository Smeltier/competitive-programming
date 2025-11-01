#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main(){ fast_io
    int N, M;
    cin >> N >> M;

    vector <vector <char>> mat(N, vector <char> (M));

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < M; ++j)
            cin >> mat[i][j];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j)
            cerr << mat[i][j] << " ";
        cerr << endl;
    }

    return 0;
}