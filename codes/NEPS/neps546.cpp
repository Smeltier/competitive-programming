//    Lista de Chamada - Neps 546 (by Smeltier)
//    https://neps.academy/br/exercise/546

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    set<string> nome;
    string aux;

    scanf("%d %d", &N, &K);
    cin.ignore(); 

    for (int i = 0; i < N; i++) {
        getline(cin, aux); 
        nome.insert(aux);  
    }
    
    auto it = nome.begin();
    advance(it, K - 1);

    cout << *it << endl;

    return 0;
}
