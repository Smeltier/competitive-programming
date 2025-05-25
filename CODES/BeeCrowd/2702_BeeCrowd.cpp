#include <bits/stdc++.h>
using namespace std;

int main(){
    int Ca, Ba, Pa;
    int Cr, Br, Pr;
    scanf("%d %d %d", &Ca, &Ba, &Pa);
    scanf("%d %d %d", &Cr, &Br, &Pr);
    printf("%d\n", max(0, Cr - Ca) + max(0, Br - Ba) + max(0, Pr - Pa));
    return 0;
}
