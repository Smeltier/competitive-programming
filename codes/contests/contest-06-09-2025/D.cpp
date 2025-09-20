#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main(){ fast_io
    int tc;
    cin >> tc;

    while(tc--){
        int n;
        cin >> n;

        vector<ll> vet(n);
        for(auto &it : vet)
            cin >> it;

        ll ans = 0;
        for(int it = 0; it < n; ++it){
            ll idx = it + 1 + ans;
            if(vet[it] > idx)
                ans += vet[it] - idx;
        } 

        cout << ans << endl;
    }

    return 0;
}