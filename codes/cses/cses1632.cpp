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
    int k, n;
    cin >> n >> k;

    vector<pair<int, int>> vet(n);
    for(int i = 0; i < n; ++i)
        cin >> vet[i].S >> vet[i].F;
    srt(vet);

    multiset<int> time;
    for(int i = 0; i < k; ++i)
        time.insert(0);
        
    int ans = 0;
    for(int i = 0; i < n; ++i){
        auto it = time.upper_bound(vet[i].S);
        if(it == time.begin()) 
            continue;

        time.erase(--it);
        time.insert(vet[i].F);

        ++ans;
    }

    cout << ans << endl;
    
    return 0;
}