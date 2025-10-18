#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

const ll INF = 1e18;



int main(){ fast_io
    int n, q;
    cin >> n >> q;

    vector <ll> pre(n + 1, 0);

    int num;
    for (int i = 1; i <= n; ++i) {
        cin >> num;
        pre[i] = pre[i - 1] + num;
    }

    int a, b;
    while (q--) {
        cin >> a >> b;
        cout << pre[b] - pre[a - 1] << endl;
    }

    return 0;
}