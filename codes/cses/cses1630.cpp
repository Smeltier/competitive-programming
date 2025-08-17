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

int main(){ fast_io
    ll n; cin >> n;

    vector<pair<ll, ll>> vet(n);
    for(int i = 0; i < n; ++i)
        cin >> vet[i].F >> vet[i].S;
    srt(vet);

    ll cnt = 0, ans = 0;
    for(auto [f, s] : vet){
        cnt += f;
        ans += s - cnt;
    }

    cout << ans << endl;

    return 0;
}