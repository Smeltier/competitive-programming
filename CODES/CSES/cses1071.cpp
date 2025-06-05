#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi vector<int>
#define vll vector<ll>
#define endl "\n"

typedef long long ll;
typedef long double ld;

int main(){ fast_io;

    int q; cin >> q;

    while(q--){
        ll x, y; cin >> y >> x;

        ll ans;
        if(max(x, y) == x){
            if(x % 2 == 0) ans = (x - 1) * (x - 1) + y;
            else ans = (x - 1) * (x - 1) + (2 * x - y);
        }
        else{
            if(y % 2 != 0) ans = (y - 1) * (y - 1) + x;
            else ans = (y - 1) * (y - 1) + (2 * y - x);
        }

        cout << ans << endl;
    }
}