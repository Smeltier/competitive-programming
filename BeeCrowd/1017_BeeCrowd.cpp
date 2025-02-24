#include <stdio.h>
 
int main() {
    int SpentTime, AvgSpeed;
    scanf("%d", &SpentTime);
    scanf("%d", &AvgSpeed);
    printf("%.3f\n", (SpentTime/12.0)*AvgSpeed);
    return 0;
}
