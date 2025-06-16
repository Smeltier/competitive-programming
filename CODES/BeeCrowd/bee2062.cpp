#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<string> palavras(N);
    for (int i = 0; i < N; i++)
        cin >> palavras[i];
    for (int i = 0; i < N; i++) {
        if (palavras[i].length() == 3) {
            if (palavras[i].substr(0, 2) == "OB" && palavras[i] != "OBI") {
                palavras[i] = "OBI";
            } else if (palavras[i].substr(0, 2) == "UR" && palavras[i] != "URI") {
                palavras[i] = "URI";
            }
        }
    }
    for (int i = 0; i < N; i++) {
        cout << palavras[i];
        if (i < N - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
