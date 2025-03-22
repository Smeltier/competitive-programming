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

    int n;
    cin >> n;

    int ans = 0;
    while(n--){
        
        string op;
        cin >> op;
        
        if(op[0] == '+' || op[op.size() - 1] == '+')
            ans++;
        
        if(op[0] == '-' || op[op.size() - 1] == '-')
            ans--;
        
    }
        
    cout << ans << endl;    

}
