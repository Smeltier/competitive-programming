#include <bits/stdc++.h>
using namespace std;

#define pb push_back
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

void solve(){
}

int main(){ fast_io
    int n, m; cin >> n >> m;

    map<char, int> pam;

    char matriz[n][m];
    for (int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> matriz[i][j];

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c = matriz[i][j];
            
            if((i + j) % 2 == 0){
                if(c == 'A') cout << 'C';
                else if(c == 'C') cout << 'A';
                else if(c == 'D') cout << 'A';
                else if(c == 'B') cout << 'A';
            }
            else{
                if(c == 'B') cout << 'D';
                else if(c == 'C') cout << 'B';
                else if(c == 'D') cout << 'B';
                else if(c == 'A') cout << 'B';
            }
        }
        cout << endl;
    }
}