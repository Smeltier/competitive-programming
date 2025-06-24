//    Palindrome Reorder - Cses 1755 (by Smeltier)
//    https://cses.fi/problemset/task/1755/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi vector<int>
#define vll vector<ll>
#define endl "\n"

typedef long long ll;
typedef long double ld;

string str; 
map<char, int> lt;

void solve(){
    int aux = 0;
    char md = '.';
    for(auto &l : lt){
        if(l.second % 2 == 1) aux++;
        if(l.second % 2 == 1) md = l.first;
    }
    
    if(aux > 1 || (aux == (int)lt.size() && (int)lt.size() != 1)){
        cout << "NO SOLUTION" << endl;
        return;
    }

    if(lt.size() == 1){
        for(auto [k, v] : lt)
            for(int i = 0; i < v; i++)
                cout << k;
        cout << endl;
        return;
    }

    string ans = "";
    for(auto [k, v] : lt)
        for(int  i = 0; i < (v % 2 == 0 ? v/2 : (v-1)/2); i++)
            ans += k;

    string rv = ans; reverse(all(rv));

    if(md != '.')
        cout << ans + md + rv << endl;
    else 
        cout << ans + rv << endl;
}

int main(){ fast_io;

    cin >> str;    
    
    for(auto &s : str)
        lt[s]++;

    solve();
}