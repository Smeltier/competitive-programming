#include <bits/stdc++.h>
#define T 20
using namespace std;
 
int main() {
    int vet[T];
    for(int i = T; i >= 0; i--)
        cin >> vet[i - 1];
    for(int i = 0; i < T; i++)
        cout << "N["<<i<<"] = " << vet[i] << endl;
    return 0;
}
