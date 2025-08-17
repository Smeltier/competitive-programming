#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define present(c, a) (c.find(a) != c.end())
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int ui;

const int maxn = 1e5+10;
const int INF = 1e9 + 10;

int main(){ fast_io
    int n; cin >> n;

    vector<pair<int, int>> cust;
    for(int i = 0; i < n; i++){
        int start, end; cin >> start >> end;
        cust.pb({start, 1});
        cust.pb({end, -1});
    }
    srt(cust);

    int ans = 0, cnt = 0;
    for(auto it : cust){
        cnt += it.S;
        ans = max(ans, cnt);
    }

    cout << ans << endl;
}