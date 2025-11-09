#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int n;
ll a, b, c;

int main () { fast_io
    cin >> n;
    cin >> a >> b >> c;    

    ll antA = a, antB = b, antC = c;

    for (int i = 1; i < n; ++i) {
        cin >> a >> b >> c;

        ll novA = a + max(antB, antC);
        ll novB = b + max(antA, antC);
        ll novC = c + max(antB, antA);

        antA = novA;
        antB = novB;
        antC = novC;
    }

    cout << max(antA, max(antB, antC)) << endl;

    return 0;
}

// 10 40 70
// 20 50 80
// 30 60 90

//  10  40  70 -> i = 0
//  90 120 120 -> i = 1
// 150 180 210 -> i = 2