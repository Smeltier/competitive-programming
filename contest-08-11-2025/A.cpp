#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int n, k;
vector<int> nums;

vector<int> bfs() {
    
}

int main(){ fast_io
    int tc;
    cin >> tc;

    while(tc--) {
        cin >> n >> k;

        ll sum = 0;

        nums.assign(n, 0);
        for(auto &it : nums) {
            cin >> it;
            sum += it;
        }

        if(k == 0 or nums.size() == 1) {
            cout << sum << endl;
            continue;
        }

        ll minv = *min_element(nums.begin(), nums.end());
        
        vector<int> dist = bfs()
    
        cout << sum << endl;
    }

    return 0;
}