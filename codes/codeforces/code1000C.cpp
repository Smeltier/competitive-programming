#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int main(){ fast_io
    int n;
    cin >> n;

    vector <int> nums (n);
    for (auto &it : nums) cin >> it;

    ll ans = 0;

    ll l = 0, r = n - 1, 
       suml = 0, sumr = 0;
    while (l <= r + 1) {
        if (suml == sumr) ans = suml;

        if (suml > sumr) {
            sumr += nums[r];
            r--;
        }
        else {
            suml += nums[l];
            l++;
        }
    }

    cout << ans << endl;

    return 0;
}