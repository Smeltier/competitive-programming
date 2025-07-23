//    Creating Strings - Cses 1622 (by Smeltier)
//    https://cses.fi/problemset/task/1622/

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

string str, per;

ll fac(int n){
    ll ans = 1;
    for(int i = 2; i <= n; i++)
        ans *= i;
    return ans;
}

vector<bool> flag;
void search(){
    if(per.length() == str.length()){
        cout << per << endl;
        return;
    }
    for(int i = 0; i < (int)str.length(); i++){
        if(flag[i]) continue;
        if(i > 0 && str[i] == str[i - 1] && !flag[i - 1]) continue;
        flag[i] = true;
        per.push_back(str[i]);
        search();
        flag[i] = false;
        per.pop_back();
    }
}

int main(){ fast_io;
    cin >> str;
    
    flag.assign(str.length(), false);

    map<char, int> freq;
    for(auto c : str)
        freq[c]++;

    ll total = fac(str.length());
    for(auto [key, value] : freq)
        total /= fac(value);

    cout << total << endl;
    srt(str);
    search();
}