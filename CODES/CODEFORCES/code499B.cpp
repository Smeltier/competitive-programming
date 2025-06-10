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



int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;

    string x, y;
    map<string,string> word;
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        word[x] = (y.size() < x.size() ? y : x);
    }
    
    for (int i = 0; i < n; i++){
        cin >> x;
        cout << word[x] << " ";
    }
}
