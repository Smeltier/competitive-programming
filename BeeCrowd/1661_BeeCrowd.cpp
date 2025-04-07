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

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;

    while(cin >> n, n){

        ll ans = 0;

        ll num;
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> num;
            sum += num;
            ans += abs(sum);
        }

        cout << ans << endl;

    }
}
