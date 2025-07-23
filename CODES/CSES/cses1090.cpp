//    Ferris Wheel - Cses 1090 (by Smeltier)
//    https://cses.fi/problemset/task/1090/

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

    int n, m;   
    cin >> n >> m;

    vector<int> vet(n);
    for(int i = 0; i < n; i++)
        cin >> vet[i];
    srt(vet);

    int ans = 0;
    int l = 0, r = n - 1;
    while(l <= r){
        if(vet[r] + vet[l] <= m){
            l++;
        }
        ans++;
        r--;
    }

    cout << ans << endl;

}