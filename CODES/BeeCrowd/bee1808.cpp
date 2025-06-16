#include <bits/stdc++.h>
using namespace std;

int main() {
    string S; cin >> S;
    int soma = 0; int contador = 0; int i = 0;
    while (i < S.length()) {
        if (i + 1 < S.length() && S[i] == '1' && S[i + 1] == '0') {
            soma += 10;
            contador++;
            i += 2;
        } else {
            soma += (S[i] - '0');
            contador++;
            i++;
        }
    }
    double media = soma / (contador * 1.0);
    cout << fixed << setprecision(2) << media << endl;
    return 0;
}
