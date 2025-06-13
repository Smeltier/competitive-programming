#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi vector<int>
#define vll vector<ll>
#define endl "\n"

typedef long long ll;
typedef long double ld;

const int n = 8;
int ans = 0;

vector<bool> col(8, false);
vector<bool> diag1(15, false), diag2(15, false);
vector<vector<bool>> mt(n, vector<bool> (n, true));

void search(int y){
    if(y == 8){
        ans++;
        return;
    }
    for(int x = 0; x < n; x++){
        if(col[x] || diag1[x+y] || diag2[x-y+n-1] || !mt[y][x]) 
            continue;
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = true;
        search(y + 1);
        col[x] = diag1[x + y] = diag2[x - y + n - 1] = false;
    }
}

int main(){ fast_io;
    for(int i = 0; i < 8; i++){
        char ch;
        for(int j = 0; j < 8; j++){
            cin >> ch;
            if(ch == '*') mt[i][j] = false;
        }
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++)
            cerr << "\t" <<  mt[i][j] << " ";
        cerr << endl << endl;
    }

    search(0);
        
    cout << ans << endl;
}