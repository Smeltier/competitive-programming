#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;

vector<vector<int>> people;
vector<bool> test;

void bfs(int x){
    queue<int> tmp;

    test[x] = true;
    tmp.push(x);

    while(!tmp.empty()){
        int aux = tmp.front();
        tmp.pop();

        for(auto v : people[aux])
            if(!test[v]){
                tmp.push(v);
                test[v] = true;
            }        
    }
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    people.assign(n+1, vector<int> ());
    test.assign(n+1, false);

    int x, y;
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        people[x].pb(y);
        people[y].pb(x);
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
        if(!test[i]){
            bfs(i);
            ans++;
        }

    cout << ans << endl;

}
