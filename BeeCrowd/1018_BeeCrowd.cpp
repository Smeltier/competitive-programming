#include <stdio.h>
 
int main() {
    int Number, Nota100 = 0, Nota50 = 0, Nota20 = 0, Nota10 = 0, Nota5 = 0, Nota2 = 0, Nota1 = 0;
    scanf("%d", &Number);
    printf("%d\n", Number);
    if(Number >= 100)
    {
        Nota100 = Number / 100;
        Number -= Nota100 * 100;
    }
    if(Number >= 50)
    {
        Nota50 = Number / 50;
        Number -= (Nota50*50);
    }
    if(Number >= 20)
    {
        Nota20 = Number / 20;
        Number -= (Nota20*20);
    }
    if(Number >= 10)
    {
        Nota10 = Number/10;
        Number -= (Nota10*10);
    }
    if(Number >= 5)
    {
        Nota5 = Number/5;
        Number -= (Nota5*5);
    }
    if(Number >= 2)
    {
        Nota2 = Number/2;
        Number -= (Nota2*2);
    }
    if(Number >= 1)
    {
        Nota1 = Number/1;
        Number -= Nota1*1;
    }
    printf("%d nota(s) de R$ 100,00\n", Nota100);
    printf("%d nota(s) de R$ 50,00\n", Nota50);
    printf("%d nota(s) de R$ 20,00\n", Nota20);
    printf("%d nota(s) de R$ 10,00\n", Nota10);
    printf("%d nota(s) de R$ 5,00\n", Nota5);
    printf("%d nota(s) de R$ 2,00\n", Nota2);
    printf("%d nota(s) de R$ 1,00\n", Nota1);
    return 0;
}
