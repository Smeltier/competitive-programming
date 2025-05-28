// BeeCrowd 1024 - Encryption.

/* You have been asked to build a simple encryption program. This program should be able to send coded messages without 
someone been able to read them. The process is very simple. It is divided into two parts. First, each uppercase or lowercase 
letter must be shifted three positions to the right, according to the ASCII table: letter 'a' should become letter 'd', letter 'y' 
must become the character '|' and so on. Second, each line must be reversed. After being reversed, all characters from the half on 
(truncated) must be moved one position to the left in ASCII. In this case, 'b' becomes 'a' and 'a' becomes '`'. For example, if the 
resulting word of the first part is "tesla", the letters "sla" should be moved one position to the left. However, if the resulting word 
of the first part is "t#$A", the letters "$A" are to be displaced.

Input:
The input contains a number of cases of test. The first line of each case of test contains an integer N (1 ≤ N ≤ 1 * 10⁴), indicating the 
number of lines the problem should encrypt. The following N lines contain M characters each M (1 ≤ M ≤ 1 * 10³).

Output:
For each input, you must present the encrypted message. */

#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
  
    // Lê e inicializa os Test Cases do problema.
    int T; cin >> T;

    // Uso para evitar problemas com a leitura da string.
    cin.ignore();
  
    for(int i = 0; i < T; i++)
    {

        // Lê a string digitada pelo usuário.
        string str; getline(cin, str);
      
        //  Primeira pedida do problema: Apenas as LETRAS são movidas 3 casas, seguindo a tabela ASCII.
        for(char &p : str) 
        {
            if( p >= 'A' && p <= 'Z') p += 3;
            if( p >= 'a' && p <= 'z') p += 3;
        }

        // Reverte a string da metade pra frente.
        reverse(str.begin(), str.end());

        // Os caracteres da parte invertida são movidos 1 casa para tras, segundo a ASCII.
        for (size_t j = str.size() / 2; j < str.size(); j++) str[j] -= 1;
      
        cout << str << "\n";
    }
    return 0;
}
