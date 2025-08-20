#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

vector<int> nums;
vector<pair<int, int>> swps;

vector<int> solve(int n, int m){
    vector<int> ans, position(n + 1);

    nums.insert(nums.begin(), 0);

    for(int it = 1; it <= n; ++it)
        position[nums[it]] = it;

    int cnt = 1;
    for(int it = 1; it < n; ++it)
        cnt += (position[it] > position[it + 1]);

    set<pair<int, int>> upd;
    for(int it = 0; it < m; ++it){
        int l = swps[it].first,
            r = swps[it].second;
        
        if(nums[l] + 1 <= n)
            upd.insert({nums[l], nums[l] + 1});
        if(nums[l] - 1 >= 1)
            upd.insert({nums[l] - 1, nums[l]});
        if(nums[r] + 1 <= n)
            upd.insert({nums[r], nums[r] + 1});
        if(nums[r] - 1 >= 1)
            upd.insert({nums[r] - 1, nums[r]});

        for(auto s : upd)
            cnt -= (position[s.first] > position[s.second]);
            
        swap(nums[l], nums[r]);
        
        position[nums[r]] = r;
        position[nums[l]] = l;
            
        for(auto s : upd)
            cnt += (position[s.first] > position[s.second]);

        ans.push_back(cnt);
        upd.clear();
    }

    return ans;
}

int main(){ fast_io
    int n, m;
    cin >> n >> m;

    nums.resize(n);
    for(auto &it : nums)
        cin >> it;

    swps.resize(m);
    for(auto &it : swps)
        cin >> it.first >> it.second;

    vector<int> ans = solve(n, m);

    for(auto it : ans)
        cout << it << endl;
    
    return 0;
}