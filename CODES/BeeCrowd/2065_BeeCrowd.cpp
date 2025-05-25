#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    map<int,int> time;
    priority_queue<int,vector<int>, greater<int>> free;
    vector<pair<int,int>> work;
    vector<pair<int,int>> new_work;
    queue<int> clients;
    int n, m, aux, ans = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++){
        cin >> aux;
        time[i+1] = aux;
        free.push(i+1);
    }
    for (int i = 0; i < m; i++){
        cin >> aux;
        clients.push(aux);
    }
    
    while(!clients.empty() || !work.empty()){
        while(!free.empty() && !clients.empty()){
            int id = free.top();
            int client = clients.front();
            clients.pop();

            work.pb({id, time[id] * client});

            free.pop();
        }

        int fast = INT_MAX;
        for (auto w : work)
            fast = min(fast, w.S);        
        ans += fast;

        for (auto &w : work){
            w.S -= fast;

            if(w.second <= 0)
                free.push(w.F);
            else
                new_work.pb(w);
        }

        work = move(new_work);
    }

    cout << ans << endl;

    return 0;
}
