#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define T 5

int main(){ fast_io
    int Number, Par[T], Impar[T], Counter = 15;
    
    int TotalPar = 0, TotalImpar = 0;

    while(Counter > 0) {
        cin >> Number;
        if(Number % 2 == 0) {
            Par[TotalPar] = Number;
            TotalPar++;

            if(TotalPar == 5){
                for(int i = 0; i < TotalPar; i++)
                    cout << "par[" << i << "] = " << Par[i] << endl;
                TotalPar = 0;
            }
        }
        if(Number % 2 != 0) {
            Impar[TotalImpar] = Number;
            TotalImpar++;

            if(TotalImpar == 5)
            {
                for(int i = 0; i < TotalImpar; i++)
                    cout << "impar[" << i << "] = " << Impar[i] << endl;
                TotalImpar = 0;
            }
        }

        Counter--;
    }

    for(int i = 0; i < TotalImpar; i++)
        cout << "impar[" << i << "] = " << Impar[i] << endl;
    
    for(int i = 0; i < TotalPar; i++)
        cout << "par[" << i << "] = " << Par[i] << endl;

    return 0;
}