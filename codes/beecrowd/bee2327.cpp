#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    int M[T][T], magic = 0, def = 0;
    int test = 0, diag1 = 0, diag2 = 0;
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            cin >> M[i][j];
            if(i == 0){
                def += M[i][j];
            }
        }
    }
    
    for(int i = 0; i < T; i++){
        test = 0;
        for(int j = 0; j < T; j++){
            test += M[i][j];
        }
        if(test == def) magic++;    
    }
    
    for(int i = 0; i < T; i++){
        test = 0;
        for(int j = 0; j < T; j++){
            test += M[j][i];
        }
        if(test == def)
            magic++;
    }
    
    for(int i = 0; i < T; i++){
        diag1 += M[i][i];
    }
    if(diag1 == def) 
        magic++;
    
    for(int i = 0; i < T; i++){
        diag2 += M[i][T - 1 - i];
    }
    if(diag2 == def) 
        magic++;
    
    if(magic == T * 2 + 2) 
        cout << def << endl;
    
    if(magic != T * 2 + 2) 
        cout << "-1" << endl;
        
    return 0;
}
