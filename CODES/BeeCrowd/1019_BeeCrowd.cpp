//    Conversão de Tempo - BeeCrowd 1019 (by Smeltier)
//    https://judge.beecrowd.com/pt/problems/view/1019

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    cout << N / 3600 << ":" << (N % 3600) / 60 << ":" << N % 60 << endl;
    return 0;
}
