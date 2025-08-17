#include <bits/stdc++.h>

using namespace std; 
 
int main() {
    long long M, N;
    while(cin >> M >> N)
    { 
        long long sumM = 1, sumN = 1;
        if(M == 0) sumM = 1;
        else for(long long i = M; i > 0; i--) sumM *= i;
        if(N == 0) sumN = 1;
        else for(long long i = N; i > 0; i--) sumN *= i;
        cout << sumM + sumN << endl;    
    }
    return 0;
}
