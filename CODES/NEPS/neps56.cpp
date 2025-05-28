//    Chvaes - Neps 56 (by Smeltier)
//    https://neps.academy/br/exercise/56

#include <bits/stdc++.h>
using namespace std;

int main(){

    int N, cont = 0, i = 0, aux = 1; 
    
    scanf("%d", &N);
    cin.ignore();

    char charac;

    while(i < N){

        charac = getchar();

        if(charac == '{')
            cont++;
        if(charac == '}')
            cont--;

        if(cont < 0)
            aux = 0;

        if(charac == '\n')
            i++;

    }

    if(!aux || cont != 0)
        printf("N\n");
    else    
        printf("S\n");

    return 0;
}
