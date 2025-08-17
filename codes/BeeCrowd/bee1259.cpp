// BeeCrowd 1259 - Even and Odd.

/* Considering the input of non-negative integer values​​, sort these numbers ​​according to the following 
criteria: First the even in ascending order followed by the odd in descending order.

Input:
The first line of input contains a positive integer number N (1 < N <= 105). This is the number of following 
input lines. The next N lines contain, each one, a integer non-negative number.

Output:
Print all numbers according to the explanation presented above. Each number must be printed in one line as 
shown below. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Armazena apenas os números pares.
    vector<int> A;

    // Armazena apenas os ímpares.
    vector<int> B;
  
    for (int i = 0; i < N; ++i) {
      
        int M;
        cin >> M;

        // Se for par, vai para A.
        if (M % 2 == 0) A.push_back(M);

        // Senão, vai para B.
        else B.push_back(M);
        
    }

    // Ordena os pares em ordem crescente.
    sort(A.begin(), A.end());

    // Ordena os ímpares em ordem decrescente.
    // Greater é usado para os maiores valores.
    // Ele combara se o valor A > B, para ordenamos em ordem decrescente.
    sort(B.begin(), B.end(), greater<int>());

    // Printa os pares.
    for (int M : A) printf("%d\n", M);

    // Printa os ímpares.
    for (int M : B) printf("%d\n", M);
  
    return 0;
}
