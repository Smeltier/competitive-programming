#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define max(a,b) (a<b?b:a)
#define abs(a) (a<0?(-a):a)
#define present(c, a) (c.find(a) != c.end())
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int ui;

const int maxn = 1e5+10;
const int INF = 1e9 + 10;



int main(){ fast_io

    string str; cin >> str;

    map<char, int> pam;
    for(int i = 0; i < (int) str.length(); i++)
        pam[str[i]]++;

    vector<pair<char, int>> pi;
    for(auto [key, value] : pam){
        pi.pb({key, value});
    }

    string ans = "";

    int fast = 1, slow = 0;
    while(fast < (int) pi.size() and slow < (int) pi.size()){

        cout << "fast = " << fast << " : " << "slow = " << slow << endl;

        if(slow < (int) pi.size()){
            ans += pi[slow].F;
            pi[slow].S--;
        }

        if(fast < (int) pi.size()){
            ans += str[fast];
            pi[fast].S--;
        }

        while(pi[slow].S <= 0)
            slow++;
        while(pi[fast].S <= 0)
            fast++;

    }

    cout << ans << endl;

}