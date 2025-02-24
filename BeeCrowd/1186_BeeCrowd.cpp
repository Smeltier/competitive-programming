#include <bits/stdc++.h>
using namespace std;
#define size 12
 
int main() {
    float M[size][size], result = 0;
    char O; cin >> O;
    cout << fixed << setprecision(1);
    for(int i = 0; i < size; i++)
        for(int j = 0; j < size; j++)
            cin >> M[i][j];
    for(int i = 1; i < size; i++)
        for(int j = (size - 1); j > (size - 1 - i); j--)
            result += M[i][j];
    if(O == 'S') cout << result << endl;
    if(O == 'M') cout << (result/66.0) << endl;
    return 0;
}
