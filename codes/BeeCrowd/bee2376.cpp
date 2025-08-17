#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

int32_t main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    
    queue<char> teams;
    int a, b;
    char x, y;

    for (char i = 'A'; i <= 'P'; i++)
        teams.push(i);

    for (int i = 1; i <= 15; i++){

        x = teams.front();
        teams.pop();
        y = teams.front();
        teams.pop();

        cin >> a >> b;

        if(a > b)
            teams.push(x);
        else
            teams.push(y);

    }
            
    cout << teams.front() << endl;

}
