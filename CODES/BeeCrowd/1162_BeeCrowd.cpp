#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N; cin >> N;
    while(N--){
        int M; cin >> M;
        vector<int> Vet(M);
        int Cont = 0;
        for(int i = 0; i < M; i++)
            scanf("%d", &Vet[i]);
        for(int i = 0; i < M - 1; i++){
            for(int j = 0; j < M - i - 1; j++){
                if(Vet[j] > Vet[j+1]){
                    int aux = Vet[j];
                    Vet[j] = Vet[j+1];
                    Vet[j+1] = aux;
                    Cont++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", Cont);
    }
    return 0;
}
