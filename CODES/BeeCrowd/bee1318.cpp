#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M && (N != 0 || M != 0)) {
        vector<int> bilhetes(M);
        for (int i = 0; i < M; i++) {
            cin >> bilhetes[i];
        }
        sort(bilhetes.begin(), bilhetes.end());
        int falsos = 0;
        for (int i = 1; i < M; i++) {
            if (bilhetes[i] == bilhetes[i - 1]) {
                falsos++;
                while (i < M && bilhetes[i] == bilhetes[i - 1]) {
                    i++;
                }
            }
        }
        cout << falsos << endl;
    }
    return 0;
}
