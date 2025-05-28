#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int N; cin >> N;
    int Menor = INT_MAX, Vet[N], Posicao;
    for(int i = 0; i < N; i++){
        cin >> Vet[i];
        if(Vet[i] < Menor){
            Menor = Vet[i];
            Posicao = i;
        }
    }
    cout << "Menor valor: " << Menor << endl;
    cout << "Posicao: " << Posicao << endl;
    return 0;
}
