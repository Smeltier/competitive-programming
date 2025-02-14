// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main(){
    int N; cin >> N;
    int soma = 0, comp = 0;
    int Num;
    for(int i = 1; i <= N; i++)
        soma += i;
    for(int i = 0; i < N-1; i++){
        cin >> Num;
        comp += Num;
    }
    printf("%d\n", soma-comp);
    return 0;
