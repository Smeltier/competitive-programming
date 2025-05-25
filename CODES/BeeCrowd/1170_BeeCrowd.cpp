#include <bits/stdc++.h>

using namespace std;
 
int main() {
    long N; cin >> N;
    for(int i = 0; i < N; i++)
    {
        int dias = 0;
        double kg; cin >> kg;
        while(kg > 1)
        {
            kg /= 2;
            dias++;
        }
        cout << dias << " dias" << endl;
    }
    return 0;
}
