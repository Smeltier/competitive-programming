#include <bits/stdc++.h>
using namespace std;

int main()
{
    char rnaa[301];
    while (cin >> rnaa)
    {
        stack<char> pilha;
        int cont = 0;
        for (int j = 0; j < strlen(rnaa); ++j)
        {
            if (pilha.empty())
                pilha.push(rnaa[j]);
            else
            {
                if ((pilha.top() == 'B' && rnaa[j] == 'S') || (pilha.top() == 'S' && rnaa[j] == 'B') || (pilha.top() == 'C' && rnaa[j] == 'F') || (pilha.top() == 'F' && rnaa[j] == 'C'))
                {
                    cont++;
                    pilha.pop();
                }
                else
                    pilha.push(rnaa[j]);
            }
        }
        printf("%d\n", cont);
    }
    return 0;
}
