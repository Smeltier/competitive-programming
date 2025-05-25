// BeeCrowd 1087 - Queen.

/* The game of Chess has several pieces with curious movements. One of them is the Queen, which can move any 
number of squares in any direction: in the same line, in the same column or in any of the diagonals, as illustrated 
by the figure below (black dots represent positions the queen may reach in one move). 
The great Chess Master Kary Gasparov invented a new type of chess problem: given the position of a queen in an empty 
standard chess board (that is, an 8 x 8 board) how many moves are needed so that she reaches another given square in the board?
Kary found the solution for some of those problems, but is having a difficult time to solve some others, and therefore he has 
asked that you write a program to solve this type of problem.

Input:
The input contains several test cases. The only line of each test case contains four integers X1, Y1, X2 and Y2 (1 ≤ X1, Y1, X2, Y2 ≤ 8). 
The queen starts in the square with coordinates (X1, Y1), and must finish at the square with coordinates (X2, Y2). In the chessboard, 
columns are numbered from 1 to 8, from left ro right; lines are also numbered from 1 to 8, from top to bottom. The coordinates of a square 
in line X and column Y are (X, Y).
The end of input is indicated by a line containing four zeros, separated by spaces.

Output: 
For each test case in the input your program must print a single line, containing an integer, indicating the smallest number of moves 
needed for the queen to reach the new position.*/

#include <bits/stdc++.h>
using namespace std;

// A rainha só "pode fazer" três movimentos, sendo eles: 
// Apenas 1, quando ele estiver na mesma linha, coluna ou diagonal que ela;
// Apenas 0, quando estiver NA MESMA casa que ela;
// Apenas 2, quando não for nenhum outro caso;

int main() {
    int X1, Y1, X2, Y2;
    while(cin >> X1 >> Y1 >> X2 >> Y2){

        // Condição para terminar o problema.
        if(X1 == 0 && X2 == 0 && Y1 == 0 && Y2 == 0) 
            break;

        // Se estiver exatamente na mesma casa.
        if(X1 == X2 && Y1 == Y2) 
            printf("0\n");

        // Se estiver na mesma 
        else if(X1 == X2 || Y1 == Y2 || abs(X1 - X2) == abs(Y1 - Y2)) 
            printf("1\n");
         
        // Não está na mesma linha, nem na mesma coluna e nem na mesma diagonal.
        else printf("2\n");
          
    }
    return 0;
}
