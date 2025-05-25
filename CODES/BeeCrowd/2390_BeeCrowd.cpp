#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N; cin >> N;
    int tempo = 0, instante = -1;
    for(int i = 0; i < N; i++){
        int Pessoa; cin >> Pessoa;
        if(instante == -1 || Pessoa > instante + 10){
            instante = Pessoa;
            tempo += 10;
        }
        else{
            tempo += (Pessoa-instante);
            instante = Pessoa;
        }
        
    }
    cout << tempo << endl;
    return 0;
}
