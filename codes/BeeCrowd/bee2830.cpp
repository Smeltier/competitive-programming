#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    int K, L;
    cin >> K >> L;
    int fase = 1;
    while (true) {
        if ((K + 1) / 2 == (L + 1) / 2)
            break;
        K = (K + 1) / 2;
        L = (L + 1) / 2;
        fase++;
    }
    switch (fase) {
        case 1:
            cout << "oitavas" << endl; break;
        case 2:
            cout << "quartas" << endl; break;
        case 3:
            cout << "semifinal" << endl; break;
        case 4:
            cout << "final" << endl; break;
    }
    return 0;
}
