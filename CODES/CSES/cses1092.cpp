#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define max(a,b) (a<b?b:a)
#define abs(a) (a<0?(-a):a)
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

    ll sum = 0;
    for(int i = 1; i <= n; i++)
        sum += i;

    if(sum % 2 != 0){
        cout << "NO" << endl;
        return 0;
    }

    vector<ll> ans, ans2;
    for(ll i = n, cnt = 0; i > 0; --i)
        if(cnt + i <= sum/2){
            cnt += i;
            ans.pb(i);
        }
        else ans2.pb(i);

    cout << "YES" << endl;
    cout << ans.size() << endl;
    for(auto &i : ans) 
        cout << i << " ";
    cout << endl;
    cout << ans2.size() << endl;
    for(auto &i : ans2) 
        cout << i << " ";
    cout << endl;

}