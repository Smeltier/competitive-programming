#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main(){ fast_io
    
    int n;
    while(cin >> n and n != 0){

        int big = 1 << (2 * (n - 1));
        int t = to_string(big).size();

        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cout << setw(t) << (1 << (i + j));
                if(j < n - 1) cout << " ";
            }
            cout << endl;
        }

        cout << endl;
    }

    return 0;
}