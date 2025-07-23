//    Bit Strings - Cses 1617 (by Smeltier)
//    https://cses.fi/problemset/task/1617/

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

int main(){ fast_io;

    const ll m = 1e9 + 7;

    ll n;
    cin >> n;

    ll ans = 1;
    for(int i = 0; i < n; i++)
        ans = (ans * 2) % m;

    cout << ans << endl;
}