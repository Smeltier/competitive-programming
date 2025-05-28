#include <bits/stdc++.h>
using namespace std;

int Dividir(double Num, int Cont, int K){
    if(Num <= K) return 1;
    return Dividir(ceil(Num/2), Cont + 1, K) + Dividir(floor(Num/2), Cont + 1, K);
}

int main(){
    int N, K;
    while(cin >> N >> K && N+K){
        if(N < K) printf("1\n");
        else if(K == 1) printf("%d\n", N);
        else{
            double Num = N;
            printf("%d\n", Dividir(Num,0,K));
        }
    }
    return 0;
}
