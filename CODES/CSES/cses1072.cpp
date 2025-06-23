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

ll solve(ll var){
    return (powl(var,2) * (powl(var,2) - 1)) / 2 - 4 * (var - 1) * (var - 2);  
}

int main(){ fast_io
    ll n; cin >> n;

    for(ll i = 1; i <= n; i++)
        cout << solve(i) << endl;

    return 0;
}