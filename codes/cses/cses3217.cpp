#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define max(a,b) (a<b?b:a)
#define abs(a) (a<0?(-a):a)
#define present(c, a) (c.find(a) != c.end())
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int ui;

int n;
vector<vector<int>> mt;

int dx[] = {1, 2, 2, 1, -1, -2, -2, -1},
    dy[] = {2, 1, -1, -2, -2, -1, 1, 2};


void bfs(){
    queue<pair<int,int>> fl;

    mt[0][0] = 0;
    fl.push({0, 0});

    while(!fl.empty()){
        pair<int, int> att = fl.front(); 
        fl.pop();

        for(int i = 0; i < 8; ++i){
            int X = dx[i] + att.F,
                Y = dy[i] + att.S;
            if(X >= 0 && X < n && Y >= 0 && Y < n && mt[X][Y] == -1){
                mt[X][Y] = mt[att.F][att.S] + 1;
                fl.push({X, Y});
            }
        }
    }
}

int main(){ fast_io
    cin >> n;

    mt.assign(n, vector<int>(n, -1));

    bfs();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << mt[i][j] << " ";
        cout << endl;
    }
}
