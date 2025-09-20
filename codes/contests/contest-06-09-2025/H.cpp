#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main(){ fast_io
    int tc;
    cin >> tc;

    while(tc--){
        int n, k;
        cin >> n >> k;

        vector<ll> vet(n);
        for(int it = 0; it < n; ++it)
            cin >> vet[it];
        sort(vet.rbegin(), vet.rend());
        
        ll ans = 0;
        ll sum = 0;

        for(int it = 0; it < n; ++it){
            if(sum + vet[it] >= k){
                ans += max(0LL, k - sum - vet[it]);
                break;
            }
            else sum += vet[it];
        }

        cout << ans << endl;
    }

    return 0;
}