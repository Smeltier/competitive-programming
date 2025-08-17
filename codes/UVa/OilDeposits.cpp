#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define endl "\n"

typedef long long ll;

int n, m;
const int maxs = 101;
vector<string> square;
bool test[maxs][maxs];

int neigX[8] = {1,1,1,-1,-1,-1,0,0}; 
int neigY[8] = {1,0,-1,1,0,-1,1,-1};

void dfs(int x, int y){
    test[x][y] = true;
    for(int i = 0; i < 8; i++){
        int auxX = x + neigX[i];
        int auxY = y + neigY[i];
        if(auxX >= 0 && auxX < m && auxY >= 0 && auxY < n && !test[auxX][auxY]){
            test[auxX][auxY] = true;
            if(square[auxX][auxY] == '@')
                dfs(auxX, auxY);
        }
    }
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    while(1){

        cin >> m >> n;
        if(m+n == 0)
            break;

        square.clear();

        for (int i = 0; i < m; i++){
            string s;
            cin >> s;
            square.pb(s);
        }

        memset(test, 0, sizeof(test));
        
        int cnt = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if(!test[i][j]){
                    test[i][j] = true;
                    if(square[i][j] == '@'){
                        cnt++;
                        dfs(i, j);
                    }
                }

        cout << cnt << endl;
    }

}
