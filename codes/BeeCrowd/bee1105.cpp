#include <bits/stdc++.h>
using namespace std;

int main() {
    int B, N;
    int D, C, V;
    bool zerado;
    while(true) {
        cin >> B >> N;
        if (!B && !N) break;
        int aux = B + 1;
        int total[aux];
        zerado = false;
        for(int i = 1; i <= B; i++)
            cin >> total[i];
        for(int i = 0; i < N; i++) {
            cin >> D >> C >> V;
            total[D] -= V;  
            total[C] += V;  
        }
        for(int i = 1; i <= B; i++) {
            if (total[i] < 0) {
                zerado = true;
                break;
            }
        }
        if(zerado) printf("N\n");
        else printf("S\n");
    }
    return 0;
}
