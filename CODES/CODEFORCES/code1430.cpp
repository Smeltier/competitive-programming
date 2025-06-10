#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;



int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t;
    cin >> t;
    while(t--){

        ll min = 0, max;

        ll n, k;
        cin >> n >> k;

        vector<ll> bar(n);
        for(ll i = 0; i < n; i++)
            cin >> bar[i];
        sort(bar.begin(), bar.end());

        max = bar[n - 1];
        for (ll i = n - 2; i >= 0; i--){
            if(k == 0)
                break;

            if(bar[i] != 0){
                max += bar[i];
                bar[i] = 0;
            }
            
            k--;
        }

        cout << max - min << endl;

    }

}
