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

vector<vector<int>> people;
vector<bool> test;

void bfs(int num){
    queue<int> q;
    test[num] = true;
    q.push(num);
    while(!q.empty()){
        int aux = q.front();
        q.pop();
        for(auto p : people[aux])
            if(!test[p]){
                test[p] = true;
                q.push(p);
            }
    }
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;

    cin >> n >> m;

    people.resize(n+1, vector<int> ());
    test.assign(n+1, false);

    int a, b;
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        people[a].pb(b);
        people[b].pb(a);
    }

    int cnt = 0;
    for(int i = 1; i <= n; ++i)
        if(!test[i]){
            bfs(i);
            cnt++;
        }

    cout << cnt << endl;

}
