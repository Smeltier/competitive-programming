#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

const ll maxn = 1e6;
vector<ll> divisors(maxn, 0);

void sieve() {
    for(int i = 1; i <= maxn; ++i)
        for(int j = i; j <= maxn; j += i)
            divisors[j]++;
}

int main(){ fast_io
    int tc;
    cin >> tc;

    sieve();

    ll num;
    while(tc--) {
        cin >> num;
        cout << divisors[num] << endl;
    }

    return 0;
}