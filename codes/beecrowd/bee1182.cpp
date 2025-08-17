#include <bits/stdc++.h>
#define SIZE 12
using namespace std;
 
int main() {
    float array[SIZE][SIZE], result = 0;
    int C; cin >> C;
    char T; cin >> T;
    cout << fixed << setprecision(1);
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            cin >> array[i][j];
        }
    }
    for(int i = 0; i < SIZE; i++){
        result += array[i][C];
    }
    if(T == 'S') cout << result << endl;
    if(T == 'M') cout << (result/SIZE) << endl;
    return 0;
