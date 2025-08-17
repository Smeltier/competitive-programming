//    Balé - Neps 536 (by Smeltier)
//    https://neps.academy/exercise/536

#include <bits/stdc++.h>
using namespace std;

int Insertion_Sort(int Vector[], int N){
    int Swaps = 0;
    for (int i = 1; i < N; i++)
    {
        int Comp = Vector[i];
        int j = i - 1;
        while (j >= 0 && Vector[j] > Comp)
        {
            Vector[j+1] = Vector[j];
            j = j - 1;
            Swaps++;
        }
        Vector[j+1] = Comp;
    }
    return Swaps;
}

int main(){
    int N; scanf("%d", &N);
    int Bal[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &Bal[i]);
    printf("%d\n", Insertion_Sort(Bal,N));
    return 0;
}
