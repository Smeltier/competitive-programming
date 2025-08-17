//    Repetitions - Cses 1069 (by Smeltier)
//    https://cses.fi/problemset/task/1069/

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



int main(){ fast_io;

    string word; 
    cin >> word;

    int cnt = 1, ans = 1;
    for(int i = 1; i < word.size() && word.size() != 1; i++){
        if(word[i-1] == word[i])
            cnt++;
        else
            cnt = 1;
        ans = max(ans, cnt);
    }

    cout << ans << endl;

}