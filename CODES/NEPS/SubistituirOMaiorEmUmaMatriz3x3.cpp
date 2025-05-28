#include <bits/stdc++.h>
#include <climits>
#define T 3
using namespace std;

int main(){
    int mat[T][T], maior = INT_MIN;
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            cin >> mat[i][j];
            if(mat[i][j] > maior) maior = mat[i][j];
        }
    }
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            if(mat[i][j] == maior) mat[i][j] = -1;
        }
    }
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            if(j != (T-1)){
                cout << mat[i][j] << " ";
            }
            else cout << mat[i][j] << endl;
        }
    }
    return 0;
}
