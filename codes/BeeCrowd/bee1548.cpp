#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; 
    cin >> N;
    while (N--) {
        int Num; cin >> Num;
        vector<int> Students(Num);
        vector<int> VetAux(Num);
        
        for (int i = 0; i < Num; i++) {
            cin >> Students[i];
            VetAux[i] = Students[i];
        }
        sort(Students.rbegin(), Students.rend());
        int Aux = Num;
        for (int i = 0; i < Num; i++) {
            if (VetAux[i] != Students[i]) {
                Aux--; 
            }
        }
        printf("%d\n", Aux);
    }
    return 0;
}
