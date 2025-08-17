#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;



int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, x;

    cin >> n >> x;

    vector<int> num(n);
    for(int i = 0; i < n; i++)
        cin >> num[i];
    sort(num.begin(), num.end());

    int sum = 0, ans = 0;
    while (sum + num[ans] <= x && ans < n){
        sum += num[ans];
        ans++;
    }
    
    cout << ans << endl;

}
