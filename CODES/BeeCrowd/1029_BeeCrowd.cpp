// BeeCrowd 1029 - Fibonacci, How Many Calls?

/* Sometimes when you are a Computer Science student, you’ll see an exercise or a problem involving the Fibonacci sequence. 
This sequence has the first two values 0 (zero) and 1 (one) and each next value will always be the sum of the two preceding numbers. 
By definition, the formula to find any Fibonacci number is:
fib(0) = 0
fib(1) = 1
fib(n) = fib(n-1) + fib(n-2);
One way of finding Fibonacci numbers is by recursive calls. This is illustrated below, presenting the tree of derivation when we c
alculate fib(4), i.e. the fifth value of this sequence:
In this way, fib(4) = 1+0+1+1+0 = 3, 8 recursive calls were done.

Input:
The first input line contains a single integer N, indicating the number of test cases. Each test case contains an integer 
number X (1 ≤ X ≤ 39).

Output:
For each test case we will have an output line, in the following format: fib(n) = num_calls calls = result, where num_calls is 
the number of recursive calls, always with a space before and after the equal sign, as shown below. */

#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, int &aux){
    int fib;
    aux++; // auxiliar que conta as vezes que a função foi chamada.
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

        // Printo a quantidade de vezes - 1, pois em TODOS os testcases ela dava 1 a mais do que era pedido.
        printf("fib(%d) = %d calls = %d\n", X, (aux - 1), result);
    }
    return 0;
}
