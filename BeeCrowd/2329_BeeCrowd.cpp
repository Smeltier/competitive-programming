#include <bits/stdc++.h>
using namespace std;

int N, K;

int Contador_Fatias(int N, int Vet[]){
    int aux = 0;
    for (int i = 0; i < K; i++)
    {
        aux += Vet[i] / N;
    }
    return aux;
}

int Busca_Valor(int Vet[]){
    int esq = 0, dir = 10000, meio;
    while (esq < dir - 1)
    {
        meio = (esq+dir)/2;
        if(Contador_Fatias(meio, Vet) < N)
            dir = meio;
        if(Contador_Fatias(meio, Vet) >= N)
            esq = meio;
    }
    return esq;
}

int main(){
    scanf("%d", &N);
    scanf("%d", &K);
    int Vet[K];
    for (int i = 0; i < K; i++)
    {
        scanf("%d", &Vet[i]);
    }
    printf("%d\n", Busca_Valor(Vet));
    return 0;
}
