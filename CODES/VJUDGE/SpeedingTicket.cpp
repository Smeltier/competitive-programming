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

    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    const int road = 100;

    int n, m, a, b;
    int ans = 0;

    cin >> n >> m;

    int tmp = 0;
    vector<int> limit(road);
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        for (int j = tmp; j < tmp + a; j++)
            limit[j] = b;
        tmp += a;        
    }
        
    tmp = 0;
    vector<int> cow(road);
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        for (int j = tmp; j < tmp + a; j++)
            cow[j] = b;
        tmp += a;        
    }
    
    for (int i = 0; i < road; i++)
        ans = max(ans, cow[i] - limit[i]);

    cout << ans << endl;    

}
