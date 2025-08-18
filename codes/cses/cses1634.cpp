#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;
vector<long long> coins;
vector<long long> memo;
vector<bool> vis;

long long solve(long long value){
    if(value < 0) return INF;
    if(value == 0) return 0;
    if(vis[value]) return memo[value];

    long long ans = INF;
    for(auto c : coins){
        long long sub = solve(value - c);
        if(sub != INF) ans = min(ans, sub + 1);
    }

    vis[value] = true;
    memo[value] = ans;
    
    return ans;
}

int main(){
    long long n, x;
    cin >> n >> x;

    coins.resize(n);
    for(auto &c : coins)
        cin >> c;

    memo.assign(x+1, 0);
    vis.assign(x+1, false);

    long long ans = solve(x);

    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}