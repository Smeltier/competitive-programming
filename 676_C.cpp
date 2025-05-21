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
typedef long double ld;



int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k; cin >> n >> k;

    int a = 0, b = 0;
    vector<char> str(n);
    for(int i = 0; i < n; i++){
        cin >> str[i];
        if(str[i] == 'a')
            a++;
        else
            b++;
    }

    char varm = (a >= b ? a : b);
    int cnt = k, ans = 0;
    for(int l = 0, r = 0; l < n; l++){
        while(r < n and cnt > 0){
            if(str[r] != varm){
                cerr << cnt << endl;
                cnt--;
            }
            r++;
            ans = max(ans, r - l + 1);
        }
        if(cnt <= 0){
            cnt++;
        }
    }

    cout << ans << endl;

}