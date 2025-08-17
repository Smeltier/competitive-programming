#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

bool compare(pair<string, vector<int>> x, pair<string, vector<int>> y){
    if(x.second[0] != y.second[0])
        return x.second[0] > y.second[0];
    if(x.second[1] != y.second[1])
        return x.second[1] > y.second[1];
    if(x.second[2] != y.second[2])
        return x.second[2] > y.second[2];
    return x.first < y.first;
}

int32_t main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    map<string, vector<int>> ctr;
    string wrd;

    int cnt = 0, i = 0;
    while(getline(cin, wrd)){

        if(cnt % 4 == 0)
            i = 0;

        else{

            if(ctr[wrd].empty())
                ctr[wrd].assign(3,0);

            ctr[wrd][i]++;
            i++;
        }
        cnt++;
    }

    vector<pair<string, vector<int>>> ans;
    for(auto c : ctr)
        ans.pb(c);
    sort(ans.begin(), ans.end(), compare);

    cout << "Quadro de Medalhas" << endl;
    for(auto a : ans){

        cout << a.F.c_str() << " ";

        for (int i = 0; i < 2; i++)
            cout << a.second[i] << " ";
        cout << a.second[2] << endl;        

    }

    return 0;
}
