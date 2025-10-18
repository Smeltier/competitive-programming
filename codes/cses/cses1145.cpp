#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

ll n; 

int main(){ fast_io
    cin >> n;

    vector<ll> vet(n);
    vector<ll> ans;

    for(auto &i : vet){
        cin >> i;
    }
    
    ans.push_back(vet[0]);
    for(int it = 1; it < n; ++it) {
        if(vet[it] > ans.back()) {
            ans.push_back(vet[it]);
        }
        else {
            ll lb = lower_bound(ans.begin(), ans.end(), vet[it]) - ans.begin();
            ans[lb] = vet[it];
        }
    }

    cout << (int) ans.size() << endl;;

    return 0;
}