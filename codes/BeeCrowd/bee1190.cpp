#include <bits/stdc++.h>
using namespace std;

#define size 12

int main() {
    char O; cin >> O;
    double M[size][size], result = 0;
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
            if(j > (11 - i) && j > i) result += M[i][j];
        }
   }
    if (O == 'S') cout << fixed << setprecision(1) << result << endl;
    if (O == 'M') cout << fixed << setprecision(1) << result / 30.0 << endl; 
    return 0;
}
