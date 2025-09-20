#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main(){ fast_io
    int tc;
    cin >> tc;

    while(tc--){
        int n; cin >> n;
        string str; cin >> str;
        
        int ans = 0;
        for(int it = 0; it < n; ++it){
            if(it + 4 < n and str.substr(it, 5) == "mapie"){
                ans++;
                it += 4;
            }
            else if(it + 2 < n and (str.substr(it, 3) == "map" || str.substr(it, 3) == "pie")) {
                ans++;
                it += 2;
            }
        }

        cout << ans << endl;
    }

    return 0;
}