//    Produto Triplo - Neps 676 (by Smeltier)
//    https://neps.academy/br/exercise/676

#include <bits/stdc++.h>
using namespace std;

typedef long long lli;

int main(){
    
    int N;
    int Vet[200001];
    lli prod1 = 1, prod2 = 1, prod3 = 1;

    scanf("%d", &N);
    for (int i = 0; i < N; i++)
        scanf("%d", &Vet[i]);

    prod1 *= Vet[N-1];
    prod1 *= Vet[N-2];
    prod1 *= Vet[N-3];

    prod2 *= Vet[0];
    prod2 *= Vet[1];
    prod2 *= Vet[2];

    prod3 *= Vet[0];
    prod3 *= Vet[1];
    prod3 *= Vet[N-1];

    printf("%lld\n", max(max(prod1,prod2),prod3));

    return 0;
}
