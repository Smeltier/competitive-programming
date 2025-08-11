#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define present(c, a) (c.find(a) != c.end())
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int ui;

int main(){ fast_io
    int n, k; 
    cin >> n >> k;

    deque<int> nums;
    for(int i = 1; i <= n; ++i)
        nums.pb(i);

    vector<int> ans;

    while(!nums.empty()){
        int aux = k;
        while(aux--){
            nums.pb(nums.front());
            nums.pop_front();
        }
        ans.pb(nums.front());
        nums.pop_front();
    }

    for(size_t i = 0; i < ans.size(); ++i){
        if(i > 0) cout << " ";
        cout << ans[i];
    }
    cout << endl;

    return 0;
}