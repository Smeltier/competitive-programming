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

ll n, d;
vector<ll> coX(1010), coY(1010);
vector<vector<ll>> tree(1010, vector<ll>());
vector<bool> test(1010, false);

void dfs(ll x){
    if(test[x])
        return;
    test[x] = true;
    for(auto t : tree[x])
        dfs(t);
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    cin >> n >> d;

    d *= d;

    for(int i = 1; i <= n; i++)
        cin >> coX[i] >> coY[i];

    for(int i = 1; i <= n; i++)
        for(int j = i + 1; j <= n; j++)
            if(pow(coX[i] - coX[j], 2) + pow(coY[i] - coY[j], 2) <= d){
                tree[i].pb(j);
                tree[j].pb(i);
            }

    int cnt = 0;
    for(int i = 1; i <= n; i++)
        if(!test[i]){
            dfs(i);
            cnt++;
        }

    cout << (cnt == 1 ? 'S' : 'N') << endl;

}
