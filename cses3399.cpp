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

int main(){ fast_io
    int t; cin >> t;

    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        if((a + b > n) or (a + b > 0 and (a == 0 or b == 0))){
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        
        int dr = n - (a + b),
            sz = n - dr;

        for(int i = b + 1; i <= sz; ++i)
            cout << i << " ";
        for(int i = 1; i <= b; ++i)
            cout << i << " ";
        for(int i = sz + 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
        
        for(int i = 1; i <= n; ++i)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}