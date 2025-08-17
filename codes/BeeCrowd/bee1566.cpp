#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    while(N--){
        int M; scanf("%d", &M);
        vector<int> Altura(M);
        for(int i = 0; i < M; i++)
            scanf("%d", &Altura[i]);
        sort(Altura.begin(), Altura.end());
        for (int i = 0; i < M; i++) {
            if (i) cout << " ";
            printf("%d", Altura[i]);
        }
        printf("\n");
    }
    return 0;
}
