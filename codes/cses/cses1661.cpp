//    Subarray Sums II - Cses 1661 (by Smeltier)
//    https://cses.fi/problemset/task/1661/

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

int main(){ fast_io

    ll n, x; cin >> n >> x;

    vector<ll> vet(n);
    for(ll i = 0; i < n; ++i)
        cin >> vet[i];

    map<ll, ll> prefix;
    prefix[0] = 1;

    ll ans = 0, pref = 0;
    for(ll i = 0; i < n; ++i){
        pref += vet[i];
        ans += (prefix[pref - x]);
        prefix[pref] += 1;
    }

    cout << ans << endl;
}