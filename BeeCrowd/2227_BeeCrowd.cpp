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

    int a, v, cnt = 0;

    while (1){

        cin >> a >> v;
        if(a+v == 0)
            break;

        int x, y, ans = 0;
        vector<int> air(a+1,0);
        for(int i = 0; i < v; i++){

            cin >> x >> y;

            air[x]++;
            air[y]++;

            ans = max(ans, max(air[x], air[y]));

        }

        cout << "Teste " << ++cnt << endl;
        for (int i = 1; i <= a; i++)
            if(air[i] == ans)
                cout << i << " ";
        cout << endl << endl;        

    }
}
