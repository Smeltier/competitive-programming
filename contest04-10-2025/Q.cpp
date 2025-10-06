#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

const ll INF = 1e18;

int main(){ fast_io
    int n, a, b;
    cin >> n >> a >> b;

    vector <ll> prefix(n + 1, 0);

    int num;
    for(int i = 1; i <= n; ++i) {
        cin >> num;
        prefix[i] = prefix[i - 1] + num;
    }

    ll ans = -INF;
    multiset<ll> ms;

    for(int i = a; i <= n; ++i) {
        if(i > b) ms.erase(ms.find(prefix[i - b - 1]));
        ms.insert(prefix[i - a]);
        ans = max(ans, prefix[i] - *ms.begin());
    }

    cout << ans << endl;

    return 0;
}