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

const ll INF = 1e18;
ll n, a, b;

int main(){ fast_io
    cin >> n >> a >> b;

    vector<ll> pre(n + 1);
    for(ll i = 1; i <= n; ++i){
        ll num; cin >> num;
        pre[i] = num + pre[i - 1];
    }

    ll ans = -INF;
    multiset<ll> ml;

    for(ll i = a; i <= n; ++i){
        if(i > b) ml.erase(ml.find(pre[i - b - 1]));
        ml.insert(pre[i - a]);
        ans = max(ans, pre[i] - *ml.begin());
    }

    cout << ans << endl;

    return 0;
}