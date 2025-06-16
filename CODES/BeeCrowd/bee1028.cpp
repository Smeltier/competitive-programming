//    Figurinhas - BeeCrowd 1028 (by Smeltier)
//    https://judge.beecrowd.com/pt/problems/view/1028

#include <bits/stdc++.h>

using namespace std;
 
int main() {
    long N; cin >> N;
    for(int i = 0; i < N; i++)
    {
        long long F1, F2; cin >> F1 >> F2;
        while(F2 != 0)
        {
            long long Remainder = F1 % F2;
            F1 = F2;
            F2 = Remainder;
        }
        cout << F1 << endl;
    }
    return 0;
}
