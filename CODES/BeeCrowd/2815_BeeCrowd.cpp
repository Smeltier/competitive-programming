#include <bits/stdc++.h>
using namespace std;

string Palavra(const string &aux) {
    if (aux.size() < 4) return aux;
    string silaba = aux.substr(0, 2);
    if (aux.substr(2, 2) == silaba)
        return aux.substr(2);
    return aux;
}

int main() {
    string frase, palavra;
    getline(cin, frase);
    stringstream l(frase);
    vector<string> palavras;
    while (l >> palavra) 
        palavras.push_back(Palavra(palavra));
    for (size_t i = 0; i < palavras.size(); i++){
        if (i > 0) cout << " ";
        cout << palavras[i];
    }
    printf("\n");
    return 0;
}
