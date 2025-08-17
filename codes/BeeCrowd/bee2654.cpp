#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

struct God{
    string name;
    int power, kills, deaths;
};

bool compare(God a, God b){
    if(a.power != b.power)
        return a.power > b.power;
    if(a.kills != b.kills)
        return a.kills > b.kills;
    if(a.deaths != b.deaths)
        return a.deaths < b.deaths;
    return a.name < b.name;
}

int32_t main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;
    
    vector<God> gods(n);

    for (int i = 0; i < n; i++){
        cin >> gods[i].name >> gods[i].power >> gods[i].kills >> gods[i].deaths;
    }

    sort(gods.begin(), gods.end(), compare);

    cout << gods[0].name << endl;
    

    return 0;
}
