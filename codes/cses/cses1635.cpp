#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

long long n, m;
vector<long long> cnt;

int main(){ fast_io
    cin >> n >> m;

    vector<long long> coins(n);
    for(auto &c : coins)
        cin >> c;

    cnt.assign(m + 1, 0);
    cnt[0] = 1;

    const long long mod = 1e9 + 7;
    for(int x = 1; x <= m; ++x)
        for(auto c : coins)
            if(x - c >= 0)
                cnt[x] = (cnt[x] + cnt[x - c]) % mod;

    cout << cnt[m] << endl;
}