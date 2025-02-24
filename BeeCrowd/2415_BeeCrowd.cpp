#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int Vet[N];
    for (int i = 0; i < N; i++)
        cin >> Vet[i];
    int maior = 1, Sequence = 1;
    for (int i = 1; i < N; i++) {
        if (Vet[i] == Vet[i - 1]) Sequence++;
        else Sequence = 1;
        if (Sequence > maior) maior = Sequence;
    }
    cout << maior << endl;
    return 0;
}
