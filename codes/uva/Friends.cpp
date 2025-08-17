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

int ans = 0, cnt = 0; 
int n, m;
vector<vector<int>> fam;
vector<bool> test; 

void bfs(int num){
    queue<int> q;
    test[num] = true;
    cnt++;
    q.push(num);
    while(!q.empty()){
        int aux = q.front();
        q.pop();
        for(auto f : fam[aux])
            if(!test[f]){
                test[f] = true;
                cnt++;
                q.push(f);
            }
    }
    ans = max(ans, cnt);
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t; cin >> t;
    while(t--){

        cin >> n >> m;

        fam.assign(n+1, vector<int>());
        test.assign(n+1, false);

        int a, b;
        for(int i = 0; i < m; i++){
            cin >> a >> b;
            fam[a].pb(b);
            fam[b].pb(a);
        }

        ans = 0;
        for(int i = 1; i <= n; i++)
            if(!test[i]){
                cnt = 0;
                bfs(i);
            }

        cout << ans << endl;
    }
}
