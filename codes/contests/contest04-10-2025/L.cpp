#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int main(){ fast_io
    int n, m; 
    cin >> n >> m;
 
    vector <vector <char>> mt (n, vector <char> (m));
    for (int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> mt[i][j];
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            char c = mt[i][j];
            
            if((i + j) % 2 == 0){
                if(c == 'A') cout << 'C';
                else if(c == 'C') cout << 'A';
                else if(c == 'D') cout << 'A';
                else if(c == 'B') cout << 'A';
            }
            else{
                if(c == 'B') cout << 'D';
                else if(c == 'C') cout << 'B';
                else if(c == 'D') cout << 'B';
                else if(c == 'A') cout << 'B';
            }
        }
        cout << endl;
    }

    return 0;
}