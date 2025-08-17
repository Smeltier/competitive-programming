//    Apartments - Cses 1084 (by Smeltier)
//    https://cses.fi/problemset/task/1084/

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

    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> vet(n);
    for(ll i = 0; i < n; i++)
        cin >> vet[i];
    srt(vet);
    
    vector<ll> ap(m);
    for(ll i = 0; i < m; i++)
        cin >> ap[i];
    srt(ap);

    ll ans = 0, i = 0, j = 0;
    while(i < n && j < m){
        if(abs(vet[i] - ap[j]) <= k){
            ans++; i++; j++;
        }
        else{
            if(vet[i] - ap[j] > k) j++;
            else i++;
        }
    }
                
    cout << ans << endl;

    return 0;
}