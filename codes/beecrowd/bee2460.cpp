#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, x;
    queue<int> q;
    unordered_set<int> r;
    
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &x);
        q.push(x);
    }
    
    scanf("%d", &M);
    for (int i = 0; i < M; i++){
        scanf("%d", &x);
        r.insert(x);
    }
    
    bool f = true;
    while(!q.empty()){
        int front = q.front();
        q.pop();

        if(r.find(front) == r.end()){
            if(!f)
                printf(" ");
            printf("%d", front);
            f = false;
        }
    }
    printf("\n");
    return 0;
}
