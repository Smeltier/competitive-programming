#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;

int N, K, m;
ll T[10000] = {0};

int Cut_Bread(int m){
    int S = 0;
    for (int i = 0; i < K; i++)
        S += T[i] / m;
    return S;
}

int Binary_Search(){
    int l = 0, r = 10000;
    while(l < r - 1)
    {
        m = (l+r)/2;
        if(Cut_Bread(m) < N)
            r = m;
        else
            l = m;
    }
    return l;
}

int main(){
    scanf("%d", &N);
    scanf("%d", &K);
    for (int i = 0; i < K; i++)
        scanf("%lld", &T[i]);
    printf("%d\n", Binary_Search());
    return 0;
}
