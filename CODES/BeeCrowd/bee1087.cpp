//    Dama - BeeCrowd 1087 (by Smeltier)
//    https://judge.beecrowd.com/pt/problems/view/1087

#include <bits/stdc++.h>
using namespace std;

int main() {
    int X1, Y1, X2, Y2;
    while(cin >> X1 >> Y1 >> X2 >> Y2){
        if(X1 == 0 && X2 == 0 && Y1 == 0 && Y2 == 0) 
            break;

        if(X1 == X2 && Y1 == Y2) 
            printf("0\n");

        else if(X1 == X2 || Y1 == Y2 || abs(X1 - X2) == abs(Y1 - Y2)) 
            printf("1\n");
         
        else printf("2\n");
    }
    return 0;
}
