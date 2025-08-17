/*
    BeeCrowd | 1410 - Ele Está Impedido!
    https://judge.beecrowd.com/pt/problems/view/1410
    Usr: Smeltier
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"



int32_t main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    while(true){

        int a, d;
        cin >> a >> d;
        if(a + d == 0)
            break;

        int atk[a], dfs[d];

        for (int i = 0; i < a; i++)
            cin >> atk[i];
        for (int i = 0; i < d; i++)
            cin >> dfs[i];

        sort(dfs, dfs + d);

        cout << (*min_element(atk , atk+a) < dfs[1] ? "Y" : "N") << endl;                  

    }

    return 0;
}
