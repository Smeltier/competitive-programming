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

    int t, n, aux;
    cin >> t;
    while(t--){

        int ans = 0, cont = 0, sum = 0;

        cin >> n;
        while(n--){

            cin >> aux;

            if(aux == 0){
                cont++;
                sum += 1;
            }    
            else
                sum += aux;
                

        }

        if(cont != 0)
            ans = cont;

        if(sum == 0)
            ans++;

        cout << ans << endl;

    }

}
