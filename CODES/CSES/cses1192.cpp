//    Counting Rooms - Cses 1192 (by Smeltier)
//    https://cses.fi/problemset/task/1192

#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"
 
typedef long long ll;
 
int n, m;
const int maxs = 1100;
vector<vector<char>> square (maxs, vector<char>(maxs));
vector<vector<bool>> test (maxs, vector<bool> (maxs));

// Find out if there are any neighbors around this house
int neighborX[4] = {0, 0, 1, -1};
int neighborY[4] = {1, -1, 0, 0};
 
void dfs(int x, int y){
    test[x][y] = true;
 
    for (int i = 0; i < 4; i++){
        int auxX = x + neighborX[i];
        int auxY = y + neighborY[i];
        if (auxX >= 0 && auxX < n && auxY >= 0 && auxY < m && !test[auxX][auxY] && square[auxX][auxY] == '.')
            dfs(auxX,auxY);
    }
 
}
 
int main(){
 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    cin >> n >> m;
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            cin >> square[i][j];
            test[i][j] = false;
        }
    
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            if(square[i][j] == '.' && !test[i][j]){
                dfs(i,j);
                cnt++;
            }
        }
 
    cout << cnt << endl;
 
}
