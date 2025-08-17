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

    string s, t;

    while(cin >> s >> t){

        int aux = 0;
        string ans = "";
        for(int i = 0; i < t.size(); i++)
            if(s[aux] == t[i]){
                ans += t[i];
                aux++;
            }

        cout << (s == ans ? "Yes" : "No") << endl;

    }

}
