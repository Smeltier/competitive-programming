//    O Mar Não Está Para Peixe - Neps 530 (by Smeltier)
//    https://neps.academy/br/exercise/530

#include <bits/stdc++.h>
using namespace std;

#define T 102

int main(){
    int N; cin >> N;
    int Lagoa[T][T] = {0};
    int Area = 0;
    int xi, xf, yi, yf;
    while(N--){
        cin >> xi >> xf >> yi >> yf; 
        for(int i = yi; i < yf; i++){
            for(int j = xi; j < xf; j++){
                Lagoa[i][j] = 1;
            }
        }
    }
    for(int i = 0; i < T; i++){
        for(int j = 0; j < T; j++){
            if(Lagoa[i][j]){
                Area++;
            }
        }
    }
    printf("%d\n", Area);
    return 0;
}
