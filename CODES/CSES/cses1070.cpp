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

    int n; cin >> n;

    if(n == 3 || n == 2){
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for(int i = 2; i <= n; i += 2)
        cout << i << " ";
    for(int i = 1; i <= n; i += 2)
        cout << i << " ";
    cout << endl;

}