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

    vector<int> vet;
    for(int i = 1; i <= n; ++i)
        vet.pb(i);

    int idx = 1;
    while((int) vet.size() > 1){
        cout << vet[idx] << " ";
        
        idx += 2;
        if(idx >= n) idx = 1;
    }

    cout << vet[0] << endl;

}