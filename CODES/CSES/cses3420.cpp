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

    map<ll, int> freq;

    int n; cin >> n;

    vector<ll> vet(n);
    for(int i = 0; i < n; ++i)
        cin >> vet[i];

    ll ans = 1;
    for(int l = 0, r = 0; l < n; l++){
        while(r < n and !freq[vet[r]]){
            freq[vet[r]]++;
            ans++;
        }
        freq[vet[l]]--;
        ans++;
    }

    cout << ans << endl;

    return 0;
}