#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define present(c, a) (c.find(a) != c.end())
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int ui;

// Binary Exponentiation aˆb
ll power(ll a, ll b){
    ll ans = 1;
    while(b > 0){
        if(b & 1) ans = (ans * a);
        a = (a * a);
        b >>= 1;
    }
    return ans;
}

ll solve(ll k){
    ll d = 1, // Digits
       b = 9; // Base

    // Find the interval
    while(k - d * b > 0){
        k -= d * b;
        b *= 10;
        d++;
    }

    ll idx = k % d;

    // The number which contains the Kth digit.
    ll ans = power(10, (d - 1)) + (k - 1) / d;

    // Find the result
    if(idx != 0)
        ans = ans / power(10, d - idx);

    return ans % 10;
}

int main(){ fast_io
    ll q; cin >> q;

    ll k;
    while(q--){
        cin >> k;
        cout << solve(k) << endl;
    }

    return 0;
}