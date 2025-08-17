#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define endl "\n"

typedef long long ll;

int n, q;
vector<int> shops;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n;
    shops.resize(n);
    for(int i = 0; i < n; ++i)
        cin >> shops[i];
    srt(shops);

    cin >> q;
    while(q--){

        int aux;
        cin >> aux;

        cout << (upper_bound(all(shops), aux) - shops.begin()) << endl;

    }

}
