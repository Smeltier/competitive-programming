#include <bits/stdc++.h>
#define T 100
using namespace std;
 
int main() {
    long double N; cin >> N;
    long double Vet[T];
    cout << fixed << setprecision(4);
    Vet[0] = N;
    cout << "N[0] = " << Vet[0] << endl;
    for(int i = 1; i < T; i++){
        Vet[i] = N/2;
        N /= 2;
        cout << "N["<<i<<"] = " << Vet[i] << endl;
    }
    return 0;
}
