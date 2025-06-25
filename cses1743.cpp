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

string str;

string solve(){
    map<char, int> pam;
    for(size_t i = 0; i < str.size(); ++i)
        pam[str[i]]++;

    vector<pair<char,int>> vet;
    copy(all(pam), back_inserter(vet));
    for(auto &[key, value] : vet)
        cout << key << " " << value << endl;

    string ans = "";
    
    int l = 0, r = 0;
    while(l < (int) vet.size() and r < (int) vet.size()){ 
        bool left = false, right = false;
        if(l < (int) vet.size() and vet[l].S != 0){
            ans += vet[l].F;
            vet[l].S--;
        }
        else if(vet[l].S == 0){
            left = true;
            l++;
        }

        if(r < (int) vet.size() and vet[r].S != 0){
            ans += vet[r].F;
            vet[r].S--;
        }
        else if(vet[r].S == 0){
            right = true;
            r++;
        } 

        
    }

    return ans;
}

int main(){ fast_io
    cin >> str;

    cout << solve() << endl;
}