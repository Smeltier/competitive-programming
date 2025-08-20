#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int main(){ fast_io
    int n;
    cin >> n;

    vector<ll> nums(n);
    for(auto &i : nums)
        cin >> i;

    set<int> vis;
    
    int rounds = 0;
    for(int it = 0; it < n; ++it){
        if(vis.find(nums[it] - 1) == vis.end())
            rounds++;
        vis.insert(nums[it]);
    }

    cout << rounds << endl;

    return 0;
}