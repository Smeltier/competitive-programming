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

    int n, m, aux = 0;
    cin >> n >> m;

    int a, b;
    bool test = true;
    for(int i = 0; i < n; i++){

        cin >> a >> b;

        if(i == 0 && a != 0)
            test = false;

        if(i == 0){
            aux = b; 
            continue;
        }

        if(a > aux)
            test = false;

        aux = max(aux, b);
    }

    if(aux != m)
        test = false;

    cout << (test ? "YES" : "NO") << endl;

}
