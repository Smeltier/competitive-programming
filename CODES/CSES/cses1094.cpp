//    Increasing Array - Cses 1094 (by Smeltier)
//    https://cses.fi/problemset/task/1094/

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

vector<ll> vet;

ll solve(){
    ll ans = 0;
    for(int i = 1; i < vet.size(); i++)
        if(vet[i - 1] > vet[i]){
            ans += (vet[i - 1] - vet[i]);
            vet[i] = vet[i - 1];
        }
    return ans;
}

int main(){ fast_io;

    ll n; cin >> n;

    vet.resize(n);
    for(int i = 0; i < n; i++)
        cin >> vet[i];

    cout << solve() << endl;
}