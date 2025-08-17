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

void solve(int f, int t, int d){
    if(d == 1){
        cout << f << " " << t << endl;
        return;
    }
    solve(f, 6 - f - t, d - 1);
    cout << f << " " << t << endl;
    solve(6 - f - t, t, d - 1);
}

int main(){ fast_io
    int n; cin >> n;
    cout << (1 << n) - 1 << endl;
    solve(1, 3, n);
}