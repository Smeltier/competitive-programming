//    Fibonacci, Quantas Chamadas? - BeeCrowd 1029 (by Smeltier)
//    https://judge.beecrowd.com/pt/problems/view/1029

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, int &aux){
    int fib;
    aux++;  
    if(n == 0) return 0;
    if(n == 1) return 1;
    fib = fibonacci(n-1, aux) + fibonacci(n-2, aux);
    return fib;
}
 
int main() {
    int T; cin >> T;
    while(T--){
        int X; cin >> X;
        int aux = 0;
        int result = fibonacci(X, aux);

        printf("fib(%d) = %d calls = %d\n", X, (aux - 1), result);
    }
    return 0;
}
