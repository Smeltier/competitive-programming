#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    
    int n, t, a, b;
    scanf("%d %d", &n, &t);

    ll up[n + 1], down[n + 1], flip[n + 2] = {0};

    for (int i = 1; i <= n; i++) 
        scanf("%lld", &up[i]);
    for (int i = 1; i <= n; i++) 
        scanf("%lld", &down[i]);

    while (t--) {
        scanf("%d %d", &a, &b);
        flip[a]++;
        flip[b + 1]--;
    }

    ll sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += flip[i];

        if (sum % 2 == 0)
            printf("%lld", up[i]);
        else
            printf("%lld", down[i]);

        if (i < n)
            printf(" ");
    }
    printf("\n");

    return 0;
}
