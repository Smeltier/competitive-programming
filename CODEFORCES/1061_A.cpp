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

    int n, S;
    int ans = 0;

    cin >> n >> S;

    int bill[n];
    for (int i = 0; i < n; i++)
        bill[i] = i + 1;
    
    int aux = n - 1;
    while(S > 0){

        if(n == 1){
            ans = S / bill[0];
            break;
        }

        if(S / bill[aux] > 0){
            S -= bill[aux];
            ans++;
        }
        else
            aux--;

    }
    
    cout << ans << endl;

}
