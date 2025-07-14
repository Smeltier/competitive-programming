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

int n, m;
vector<int> vet;

int solve(){
    srt(vet);
    int aux; cin >> aux;

    auto idx = lower_bound(vet.begin(), vet.end(), aux);

    cout << "Valor : " << *idx << endl;

    *idx = INT_MAX;

    // int idx = (int) vet.size() - 1;
    // while(vet[idx] > aux) 
    //     idx--;

    // if(idx < 0) return -1;

    // int ans = vet[idx];
    // vet.erase(vet.begin() + idx);


    // return ans;
}

int main(){ fast_io
    cin >> n >> m;

    vet.resize(n);
    for(int i = 0; i < n; ++i)
        cin >> vet[i];

    while(m--){
        solve();
        // cout << solve() << endl;
    }
}