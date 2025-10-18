#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

const ll INF = 1e18;

int main(){ fast_io

    vector <double> valores = {0.84, 1.00, 0.69, 0.68, 0.78, 0.63, 0.56, 0.66};
    double valor_medio = 0.73;

    double somatorio = 0.0;
    for (int i = 1; i <= 8; ++i)
        somatorio = somatorio + pow((valores[i] - valor_medio), 2);

    cout << "Somatorio: " << somatorio << endl;

    cout << "Incerteza: " << sqrt(somatorio / (8 * 7)) << endl;


    return 0;
}