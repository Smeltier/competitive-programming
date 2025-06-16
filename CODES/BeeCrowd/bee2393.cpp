#include <bits/stdc++.h>
using namespace std;

#define T 102
 
int main() {
    int N; cin >> N;
    int M[T][T] = {0};
    int Area = 0;
    int xi, xf, yi, yf;
    while(N--){
        cin >> xi >> xf >> yi >> yf;
        for(int i = yi - 1; i < yf - 1; i++)
            for(int j = xi - 1; j < xf - 1; j++)
                M[i][j] = 1;
    }
    for(int i = 0; i < T-2; i++)
        for(int j = 0; j < T-2; j++)
            if(M[i][j]) Area++;
    printf("%d\n", Area);
    return 0;
}
