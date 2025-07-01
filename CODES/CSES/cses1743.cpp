#include <bits/stdc++.h>
using namespace std;

#define pb push_back
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

int sz;
string str;
map<char, int> pam;

bool cmp(int aux){
    for(auto p : pam)
        if(p.S > (aux + 1) / 2) return false;
    return true;
}

string solve(){
    for(char s : str) pam[s]++;

    if(!cmp(sz)) return "-1";

    string ans = "";
    char prev = 0;

    for(int i = 0; i < sz; ++i){
        bool flag = false;

        for(auto ite = pam.begin(); ite != pam.end(); ++ite){
            char c = ite->F;
            int &f = ite->S;

            if(!f || c == prev) continue;

            f--;
            if(cmp(sz - i - 1)){
                ans += c;
                prev = c;
                flag = true;

                if(!f) pam.erase(c);
                break;
            }
            else f++;
        }

        if(!flag) return "-1";
    }

    return ans;
}

int main(){ fast_io
    cin >> str;
    sz = (int) str.size();
    cout << solve() << endl;
}