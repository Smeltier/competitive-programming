#include <bits/stdc++.h>
#define T 12
using namespace std;
 
int main() {
    float M[T][T], result = 0;
    char O; cin >> O;
    for(int i = 0; i < T; i++)
        for(int j = 0; j < T; j++)
            cin >> M[i][j];
    for(int i = 0; i < T; i++)
        for(int j = 0; j < T; j++)
            if(j > i) result += M[i][j];
    if(O == 'S') cout << result << endl;
    if(O == 'M') cout << (result/66) << endl;
    return 0;
}
