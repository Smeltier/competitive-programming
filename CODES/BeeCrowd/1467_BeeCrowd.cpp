#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C;
    while(cin >> A >> B >> C){
        if(A == B && B == C){
            printf("*\n");
            continue;
        }
        if(A != B && B == C)
        {
            printf("A\n");
            continue;
        } 
        if(B != A && B != C && A == C){
            printf("B\n");
            continue;
        } 
        if(C != B && B == A){
            printf("C\n");
            continue;
        } 
    }
    return 0;
}
