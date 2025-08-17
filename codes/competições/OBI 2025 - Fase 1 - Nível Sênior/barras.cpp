#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int h = INT_MIN;
    vector<int> vet(n);
    for(int i = 0; i < n; i++){
        cin >> vet[i];
        h = max(h, vet[i]);
    }

    for(int i = 0; i < n; i++)
        vet[i] = h - vet[i];
 
    vector<vector<bool>> mat(h, vector<bool>(n, true));

    int idx = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <  h; j++){
            if(vet[idx]){
                mat[j][i] = false;
                vet[idx]--;
            }
        }
        idx++;
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j];
            if(j < n - 1)
                cout << " ";
        }
        cout << endl;
    }
}