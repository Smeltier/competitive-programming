#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main(){ fast_io
    int n, novo, old, occ = 0;

    cin >> n;
    cin >> old;
    
    for(int i = 2; i <= n; ++i){
        cin >> novo;

        if(novo < old and occ == 0)
            occ = i;

        old = novo;
    }

    cout << occ << endl;

    return 0;
}