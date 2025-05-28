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

    const ll maxs = 1000000;
    vector<ll> div(maxs + 1,0);
    for (ll i = 1; i <= maxs; i++)
        for (ll j = i; j <= maxs; j += i)
            div[j]++;
            
    ll n;
    cin >> n;
    while(n--){

        ll m;
        cin >> m;

        cout << div[m] << endl;

    }

}
