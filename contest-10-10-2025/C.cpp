#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

const ll INF = 1e18;
const ll mod = 1e9 + 7;

ll ans (ll a, ll b) {
    if (b == 0) return 1;
    
    ll ant = ans(a, b / 2);
    if (b % 2 == 0)
        return (ant * ant) % mod; 
    else
        return (((ant * ant) % mod) * a) % mod;
}

int main(){ fast_io
    int n;
    cin >> n;

    ll a, b;
    while (n--) {
        cin >> a >> b;
        cout << ans(a, b) << endl;
    }

    return 0;
}