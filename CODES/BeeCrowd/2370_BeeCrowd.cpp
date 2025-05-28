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

typedef struct{
    string name;
    int pw;
    int team;
} Player;

bool cmp(Player x, Player y){
    return x.pw > y.pw;
}

bool team_cmp(Player x, Player y){
    if(x.team != y.team)
        return x.team < y.team;
    return x.name < y.name;
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    vector<Player> players(n);
    for (int i = 0; i < n; i++)
        cin >> players[i].name >> players[i].pw;
    sort(all(players), cmp);

    int j = 1;
    for (int i = 0; i < n; i++){
        players[i].team = j++;
        if(j == m + 1)
            j = 1;
    }
    sort(all(players), team_cmp);

    j = 1;
    cout << "Time " << j << endl;
    for (int i = 0; i < n; i++){
        cout << players[i].name << endl;
        if(players[i].team != players[i+1].team){
            j++;
            if(j <= m)
                cout << endl << "Time " << j << endl;
        }
    }
    cout << endl;

}
