#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int main(){ fast_io
    ll n, x;    
    cin >> n >> x;

    vector<pair<int, int>> vet(n);
    for(int it = 0; it < n; ++it)
        cin >> vet[it].first;
    for(int it = 0; it < n; ++it)
        cin >> vet[it].second;

    vector<pair<bool, int>> pos(x + 1);
        
    pos[0].first = true;
    for(int i = 1; i <= x; ++i)
        for(int j = x; j >= 0; --j)
            if(pos[j].first)
                pos[j + vet[i - 1].first].first = true;

    for(int i = 0; i < x + 1; ++i)
        cerr << pos[i].first << " " << pos[i].second << endl;

    return 0;
}