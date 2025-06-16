// BeeCrowd 2518 - FNDI's Staircase

/* The building of the Federal Department of Natural Islands (FDNI) is being widely reformed to be more accessible. 
There is a staircase with N steps. Each step is H centimeters high, C centimeters long and and L centimeters wide. 
Figure (a) shows a staircase with N=4 steps. To make the building accessible, FDNI’s management decided to place a 
ramp over the staircase. The ramp is hard and has a rectangular format. It will be placed over the staircase in such 
a way that all its steps are covered, as indicated by figure (b).
Your task is, given the number of steps and its measures, determine the total area of the ramp’s surface.

Input:
The input contains several test cases. The first line of each test case contains an integer N (1 ≤ N ≤ 1000), 
the number of steps in the staircase. The second line contains three integers H, C and L (1 ≤ H, C, L ≤ 100), 
the measures of each step, in centimeters.
The input ends with end-of-file (EOF).

Output:
For each test case, print a line containing the total area of the ramp’s surface, in square meters. 
Round and print this value with exactly 4 decimal places. */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, H, C, L;
    while(cin >> N >> H >> C >> L){

        // Equação para transformar a escada dada em uma rampa.
        // N → Número de degraus da escada
        // H → Altura de cada degrau (em cm)
        // C → Profundidade de cada degrau (em cm)
        // L → Largura de cada degrau (em cm)
        // Divido por 10000 para se encaixar na unidade de medida.
        printf("%.4f\n", ((sqrt((pow(N*H,2))+(pow(N*C,2))))*L)/10000);
      
    }
    return 0;
}
