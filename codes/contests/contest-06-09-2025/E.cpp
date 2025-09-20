#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

int main(){ fast_io
    int tc;
    cin >> tc;

    while(tc--){
        int life, n, m;
        cin >> life >> n >> m;

        while(n > 0 and life > 20){
            life = life / 2 + 10;
            n--;
        }

        life -= m * 10;

        if(life <= 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}