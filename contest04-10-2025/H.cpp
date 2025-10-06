#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int main(){ fast_io
    int n;
    cin >> n;

    vector <pair <int, int>> cust;
    for(int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;

        cust.push_back({a, 1});
        cust.push_back({b, -1});
    }

    sort(cust.begin(), cust.end());

    int ans = 0, cnt = 0;
    for(auto [f, s] : cust) {
        cnt += s;
        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}