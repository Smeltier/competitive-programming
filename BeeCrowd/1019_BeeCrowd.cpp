#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    cout << N / 3600 << ":" << (N % 3600) / 60 << ":" << N % 60 << endl;
    return 0;
}
