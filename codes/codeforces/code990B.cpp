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



int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n, k;
    cin >> n >> k;

    vector<ll> bac(n);
    for (int i = 0; i < n; i++)
        cin >> bac[i];
    srt(bac);

    int ans = n;
    for (int i = 0; i < n; i++){
        int tmp = upper_bound(all(bac), bac[i]) - bac.begin();
        if(tmp < n && bac[tmp] - bac[i] <= k)
            ans--;
    }

    cout << ans << endl;    

}
