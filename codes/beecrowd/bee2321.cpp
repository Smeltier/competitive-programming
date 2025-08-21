#include <bits/stdc++.h>
using namespace std;

struct Retangulo{
    int x1, y1, x2, y2;
};

bool colisao(Retangulo r1,Retangulo r2){

    if (r1.x2 < r2.x1 || r2.x2 < r1.x1)
        return false;

    if (r1.y2 < r2.y1 || r2.y2 < r1.y1)
        return false;

    return true;
}

int main(){

    Retangulo r1, r2;

    scanf("%d %d %d %d", &r1.x1, &r1.y1, &r1.x2, &r1.y2);
    scanf("%d %d %d %d", &r2.x1, &r2.y1, &r2.x2, &r2.y2);

    if(colisao(r1,r2))
        printf("1\n");
    else    
        printf("0\n");

    return 0;
}
