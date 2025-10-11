#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main(){ fast_io
    int a, b;

    while(cin >> a >> b)
        if(a == b) cout << a << endl;
        else cout << max(a, b) << endl;

    return 0;
}