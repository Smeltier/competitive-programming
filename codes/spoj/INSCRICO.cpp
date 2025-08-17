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
    
    int N; cin >> N;
    map<string, int> m;
    vector<string> o;
    string name, sch;

    while(N != 0){
        for (int i = 0; i < N; ++i){
            cin >> name >> sch;
            if(m[sch] == 0){
                m.insert(mp(sch,1));
                o.pb(sch);
            }
            m[sch]++;
        }
        cin >> N;
    } 

    for(int i = 0; i < (int)o.size(); i++)
        cout << o[i] << " " << m[o[i]] << endl;
    
}
