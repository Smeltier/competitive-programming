#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

const ll MOD = 1e9 + 7;
ll expo(ll a, ll b) {
    if (b == 0) return 1;
    if (b == 1) return a % MOD;

    ll ant = expo(a, b / 2);

    if (b % 2 == 0) return (ant * ant) % MOD;
    else return (((ant * ant) % MOD) * a) % MOD;
} 

int main(){ fast_io
    int tc;
    cin >> tc;

    ll a, b;
    while (tc--) {
        cin >> a >> b;
        cout << expo(a, b) << endl;
    }

    return 0;
}