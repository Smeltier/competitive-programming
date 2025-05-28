#include <bits/stdc++.h>
using namespace std;

int main(){
    int Numeros, Maior = 0;
    do{
        cin >> Numeros;
        if( Numeros > Maior ) Maior = Numeros;
    } while (Numeros != 0);
    cout << Maior << endl;
    return 0;
}
