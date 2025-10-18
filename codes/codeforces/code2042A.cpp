#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int main(){ fast_io
    int tc;
    cin >> tc;

    while(tc--){
        int n, k;
        cin >> n >> k;

        vector<int> ch(n);
        for(auto &it : ch)
            cin >> it;
        sort(ch.begin(), ch.end(), greater<>());

        int sum = 0;
        for(int it = 0; it < n; ++it)
            if(sum + ch[it] <= k)
                sum += ch[it];
            else break;

        if(sum == k) cout << 0 << endl;
        else cout << k - sum << endl;
    }

    return 0;
}