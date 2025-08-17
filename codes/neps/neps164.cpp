//    Xadrez - Neps 164 (by Smeltier)
//    https://neps.academy/br/exercise/164

#include <bits/stdc++.h>
using namespace std;

int main(){
    int L, C; cin >> L >> C;
    int Table[L][C];
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            if((i + j) % 2 == 0) Table[i][j] = 1;
            else Table[i][j] = 0;
        }
    }
    if(Table[L-1][C-1] == 1) cout << "1" << endl;
    else cout << "0" << endl;
    return 0;
}
