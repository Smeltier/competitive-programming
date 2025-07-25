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
 
const int maxn = 1e5+10;
const int INF = 1e9 + 10;
 
int cnt = 0;
string str;
 
const int sz = 7;
bool mt[sz][sz];

int distX[4] = {0, 0, 1, -1};
int distY[4] = {1, -1, 0, 0};
char dire[4] = {'R', 'L', 'D', 'U'};
 
void search(int x, int y, int i){
    if(i == sz * sz - 1 && x == sz - 1 && y == 0){
        cnt++;
        return;
    }
 
    if(i != sz * sz - 1 && x == sz - 1 && y == 0)
        return;
 
    bool left   = (y - 1 < 0)   || mt[x][y - 1],
         right  = (y + 1 >= sz) || mt[x][y + 1],
         up     = (x - 1 < 0)   || mt[x - 1][y],
         down   = (x + 1 >= sz) || mt[x + 1][y];
 
    if ((left && right && !up && !down) ||
        (up && down && !left && !right)) {
        return;
    }
 
    for(int k = 0; k < 4; ++k){
        int lin = x + distX[k],
            col = y + distY[k];
 
        if(lin >= 0 && lin < sz && col >= 0 && col < sz && !mt[lin][col]){
 
            char ch = str[i];
            if (ch != '?' && dire[k] != ch)
            continue;
 
            mt[lin][col] = true;
            search(lin, col, i + 1);
            mt[lin][col] = false;
        }
    }
}
 
int main(){ fast_io
    cin >> str;
 
    memset(mt, 0, sizeof mt);
    mt[0][0] = true;

    search(0, 0, 0);
 
    cout << cnt << endl;
}