#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;

const int maxs = 500010;
int n, k;
int v[maxs], pref[maxs] = {0};

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    pref[1] = v[1];
    for (int i = 2; i <= n; i++)
        pref[i] = pref[i-1] + v[i];

    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ans += upper_bound(pref+i, pref+n+1, pref[i-1] + k) - lower_bound(pref+i, pref+n+1, pref[i-1] + k);
    }    
    cout << ans << endl;
    return 0;
}
