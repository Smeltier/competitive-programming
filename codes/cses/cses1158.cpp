#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

ll n, x;    

int main(){ fast_io
    cin >> n >> x;
    
    vector<pair<ll, ll>> vet(n);
    
    for(int it = 0; it < n; ++it)
        cin >> vet[it].first;

    for(int it = 0; it < n; ++it)
        cin >> vet[it].second;
    
    vector<ll> dp(x + 1, 0);
    for(int it = 0; it < n; ++it){
        for(int c = x; c > 0; --c){
            if(vet[it].first > c)
                continue;
            dp[c] = max(dp[c], vet[it].second + dp[c - vet[it].first]);
        }
    }

    cout << dp[x] << endl;    

    return 0;
}