//    Movie Festival - Cses 1629 (by Smeltier)
//    https://cses.fi/problemset/task/1629

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;



int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, a, b;

    cin >> n;

    vector<pair<int,int>> events(n);
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        events[i].S = a;
        events[i].F = b; 
    }
    sort(events.begin(), events.end());

    int cont = 0;
    int curr = -1;
    for (int i = 0; i < n; i++)
        if(events[i].S >= curr){
            curr = events[i].F;
            cont++;
        }

    cout << cont << endl;

}
