#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define endl "\n"

typedef long long ll;

ll n, t;
vector<ll> nums;

ll aux(ll x){

    ll sum = 0;
    for(ll i = 0; i < n; i++){
        sum += x / nums[i];

        if(sum >= t)
            return sum;
    }
    return sum;
}

ll Binary_Search(){
    ll l = 0, r = 1e18;
    ll ans = r;

    while(l <= r){

        ll m = l + (r - l) / 2;

        if(aux(m) >= t){
            ans = m;
            r = m - 1;
        }
        else 
            l = m + 1;
    }
    
    return ans;
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n >> t;

    nums.resize(n);
    for(ll i = 0; i < n; i++)
        cin >> nums[i];

    cout << Binary_Search() << endl;

}
