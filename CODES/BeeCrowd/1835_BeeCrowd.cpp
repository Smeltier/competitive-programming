#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;

vector<vector<int>> city;
vector<bool> test;

void dfs(int num){
    test[num] = true;
    for(auto v : city[num])
        if(!test[v])
            dfs(v);    
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++){

        int n, m;
        cin >> n >> m;

        city.assign(n+1, vector<int> ());
        test.assign(n+1, false);

        int x, y;
        for (int i = 0; i < m; i++){
            cin >> x >> y;
            city[x].pb(y);
            city[y].pb(x);
        }
        
        int cnt = -1;
        for (int i = 1; i <= n; i++)
            if(!test[i]){
                dfs(i);
                cnt++;
            }
        
        cout << "Caso #" << i << ": ";
        if(cnt)
            cout << "ainda falta(m) " << cnt << " estrada(s)" << endl;
        else
            cout << "a promessa foi cumprida" << endl;

    }

}
