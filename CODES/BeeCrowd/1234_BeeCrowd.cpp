#include <bits/stdc++.h>
#define T 100
using namespace std;
 
int main() {
    char Sentence[T];
    int i, j, l;
    while(cin.getline(Sentence, T))
    {  
        j = 0;
        l = strlen(Sentence);
        for(int i = 0; i < l; i++){
            if(Sentence[i] != ' '){
                j++;
                if(Sentence[i] > 96 && j%2==1) Sentence[i] -= 32;
                else if(Sentence[i] < 96 && j%2 == 0) Sentence[i] += 32;
            }
        }
        Sentence[l] = '\0';
        cout << Sentence << endl;
    }
    return 0;
}
