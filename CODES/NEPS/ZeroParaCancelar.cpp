#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int N, x, sum = 0;
    stack<int> num;

    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &x);
        if(x != 0)
            num.push(x);
        else
            num.pop();
    }

    while(!num.empty()){
        sum += num.top();
        num.pop();
    }

    printf("%d\n", sum);

    return 0;
}
