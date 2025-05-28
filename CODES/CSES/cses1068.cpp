//    Weird Algorithm - Cses 1068 (by Smeltier)
//    https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long N; cin >> N;
    printf("\n%lld ", N);
    while(N != 1){
        if(N == 0) break;
        if(N % 2 == 1){
            N = N * 3 + 1;
            printf("%lld ", N);
        }
        else{
            N /= 2;
            printf("%lld ", N);
        }
    return 0;
    }
}