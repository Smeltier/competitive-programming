#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;

int Binary_Search(const ll x, const vector<ll> &arr, const ll arrSize) {
    ll l = 0, r = arrSize - 1, ans = -1;
    while (l <= r) {
        ll m = (l + r) / 2;
        if (arr[m] >= x) {
            ans = m;
            r = m - 1;
        } 
        else 
            l = m + 1;
    }
    return (ans != -1 && arr[ans] == x) ? ans : -1;
}


int32_t main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll N, M;
    cin >> N >> M;

    vector<ll> arr(N);
    for(int i = 0; i < N; i++)
        cin >> arr[i];

    while(M--){

        int x; cin >> x;
        cout << Binary_Search(x, arr, N) << endl;

    }

    return 0;
}
