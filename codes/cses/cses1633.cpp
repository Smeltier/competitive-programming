#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

long long n;
vector<long long> cnt;

int main(){ fast_io
    vector<long long> dice = {1, 2, 3, 4, 5, 6};
    
    cin >> n;

    cnt.assign(n + 1, 0);
    cnt[0] = 1;

    const long long m = 1e9 + 7;
    for(int x = 1; x <= n; ++x)
        for(auto c: dice)
            if(x - c >= 0)
                cnt[x] = (cnt[x] + cnt[x - c]) % m;

    cout << cnt[n] << endl;
}