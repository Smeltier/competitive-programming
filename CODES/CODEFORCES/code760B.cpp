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
typedef long double ld;

ll n, m, k;

ll sum(ll x, ll len) {
    if (x > len)
        return (x - 1 + x - len) * len / 2;
    else
        return (x - 1 + 1) * (x - 1) / 2 + (len - (x - 1));
}

bool pos(ll x) {
    return sum(x, k - 1) + sum(x, n - k) + x <= m;
}

ll bs(){
    ll l = 1, r = m, ans = -1;
    while(l <= r){
        ll mid = l + (r - l) / 2;
        if(pos(mid)){
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n >> m >> k;

    cout << bs() << endl;

}
