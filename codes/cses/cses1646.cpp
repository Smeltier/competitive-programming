//    Static Range Sum Queries - Cses 1646 (by Smeltier)
//    https://cses.fi/problemset/task/1646

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n, q, a, b;
    ll soma = 0;
    scanf("%d %d", &n, &q);
    vector<ll> number(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &number[i]);
    }

    vector<ll> prefix (n+1);
    prefix[0] = 0;
    for (int i = 1; i < n+1; i++)
    {
        prefix[i] = number[i-1] + prefix[i-1];    
    }
    for (int i = 0; i < q; i++)
    {
        scanf("%d %d", &a, &b);
        soma = prefix[b] - prefix[a-1];
        printf("%lld\n", soma);
    }
    return 0;
}
