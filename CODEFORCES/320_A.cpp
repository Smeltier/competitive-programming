#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;



int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll n;
    cin >> n;

    bool test = true;
    while(n > 0){
        if(n % 1000 == 144)
            n /= 1000;
        else if(n % 100 == 14)
            n /= 100;
        else if(n % 10 == 1)
            n /= 10;
        else{
            test = false;
            break;
        } 
    }

    if(test)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
