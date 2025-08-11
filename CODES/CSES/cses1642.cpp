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
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> vet(n);
    for(int i = 0; i < n; ++i){
        cin >> vet[i].F;
        vet[i].S = i + 1;
    }

    map<ll, pair<int, int>> pam;

    for(int i = 0; i < n; ++i)
        for(int j = i + 1; j < n; ++j){
            ll sum = vet[i].F + vet[j].F;
            pam[sum] = {i, j};
        }

    for(int i = 0; i < n; ++i)
        for(int j = i + 1; j < n; ++j){
            ll aux = x - (vet[i].F + vet[j].F);
            if(pam.count(aux)){
                auto [k, l] = pam[aux];
                if(i != k && i != l && j != k && j != l){
                    cout << i + 1 << " " << j + 1 << " "
                         << k + 1 << " " << l + 1 << endl;
                    return 0;
                }
            }
        }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}