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

    int n;
    cin >> n;

    bool a = false, b = false;
    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;

        if(aux == 1) 
            a = !a;
        else{
            a = !a;
            b = !b;
        }
    }

    cout << (int)a << "\n" << (int)b << endl;

}