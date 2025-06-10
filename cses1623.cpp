#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define max(a,b) (a<b?b:a)
// #define abs(a) (a<0?(-a):a)
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
const ll INF = 1e18 + 10;

ll n, tt = 0, ans = INF;
vector<ll> vet, per;

void search(ll valor, ll sum){
    if(valor == n){
        ans = min(ans, abs(abs(tt - sum) - sum));
        return;
    }
    per.pb(vet[valor]);
    search(valor + 1, sum + vet[valor]);
    per.pop_back();
    search(valor + 1, sum);
}

int main(){ fast_io 
    cin >> n;

    vet.resize(n);
    for(int i = 0; i < n; i++){
        cin >> vet[i];
        tt += vet[i];
    }  

    search(0, 0);

    cout << ans << endl;
}