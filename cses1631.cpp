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

int main(){ fast_io
    int n; cin >> n;

    ll sum = 0, maxn = 0;
    for(int i = 0; i < n; ++i){
        ll t; cin >> t;
        sum += t;
        maxn = max(maxn, t);
    }

    cout << max(maxn * 2, sum) << endl;

    return 0;
}