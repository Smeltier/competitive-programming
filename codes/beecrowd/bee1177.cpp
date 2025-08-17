#include <bits/stdc++.h>
#define SIZE 1000
using namespace std;


int main() {
    int N[SIZE], T, J = 0; cin >> T;
    for(int i = 0; i < SIZE; i++){
        if(J == T){
            J = 0;
            N[i] = J;
            J++;
            cout << "N["<<i<<"] = " << N[i] << endl;
        }
        else{
            N[i] = J;
            J++;
            cout << "N["<<i<<"] = " << N[i] << endl;
        }
            
    }
    return 0;
}
