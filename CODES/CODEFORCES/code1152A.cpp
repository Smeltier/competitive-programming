#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;



int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n, m, aux;

    cin >> n >> m;

    ll oddN = 0, evenN = 0, oddM = 0, evenM = 0;
    for (ll i = 0; i < n; i++){
        
        cin >> aux;

        if(aux % 2 == 0)
            evenN++;
        else  
            oddN++;

    }
    
    for (ll i = 0; i < m; i++){

        cin >> aux;

        if(aux % 2 == 0)
            evenM++;
        else
            oddM++;
    
    }

    ll ans = 0;
    if(oddN > 0 || oddM > 0){
        if(oddM > 0)
            ans = min(oddM,evenN);
        if(oddN > 0)
            ans += min(evenM,oddN);
    }

    cout << ans << endl;
}1
