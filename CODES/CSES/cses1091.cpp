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

int main(){ fast_io
    int n, m;
    cin >> n >> m;

    multiset<int> tk;
    for(int i = 0; i < n; ++i){
        int p; cin >> p;
        tk.insert(p);
    }

    int c; // customer
    while(m--){
        cin >> c;

        auto it = tk.upper_bound(c);

        if(it == tk.begin())
            cout << -1 << endl;
        else{
            --it;
            cout << *it << endl;
            tk.erase(it);
        }
    }

    return 0;
}