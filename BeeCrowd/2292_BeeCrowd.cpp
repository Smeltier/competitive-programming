#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

char blink(char cr){
    return cr == 'X' ? 'O' : 'X';
}

int32_t main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, t;

    cin >> n;
    while(n--){

        string led, ans;

        cin >> led >> t;

        for (int i = 0; i < (int)led.size(); i++){
            ans += (t % 2 == 0) ? led[i] : blink(led[i]);

            t /= 2;

            if(led[i] == 'O' && ans[i] == 'X')
                t++;
        }
        
        cout << ans.c_str() << endl;

    }

    return 0;
}
