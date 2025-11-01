#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int main () { fast_io
    ll n, k;
    cin >> n >> k;

    vector <ll> nums(n);
    for (auto &it : nums)
        cin >> it;

    map <ll, ll> mp;
        
    ll ans = 0;
    for (ll l = 0, r = 0; r < n; ++r) {
        mp[nums[r]]++;
        
        while ((int) mp.size() > k) {
            mp[nums[l]]--;
            if (mp[nums[l]] == 0) mp.erase(nums[l]);
            l++;
        }

        ans += (r - l + 1);
    }
    
    cout << ans << endl;

    return 0;
}