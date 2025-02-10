#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> Vet(N);
        int Cont = 0;
        for(int i = 0; i < N; i++)
            scanf("%d", &Vet[i]);
        for(int i = 0; i < N - 1; i++){
            for(int j = 0; j < N - i - 1; j++){
                if(Vet[j] > Vet[j+1]){
                    swap(Vet[j], Vet[j+1]);
                    Cont++;
                }
            }
        }
    printf("%d\n", Cont);
    return 0;
}

// Entender o problema.
