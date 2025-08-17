//    Criptografia - BeeCrowd 1024 (by Smeltier)
//    https://judge.beecrowd.com/pt/problems/view/1024

#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int T; cin >> T;

    cin.ignore();
  
    for(int i = 0; i < T; i++)
    {

        string str; getline(cin, str);

        for(char &p : str) 
        {
            if( p >= 'A' && p <= 'Z') p += 3;
            if( p >= 'a' && p <= 'z') p += 3;
        }

        reverse(str.begin(), str.end());

        for (size_t j = str.size() / 2; j < str.size(); j++) str[j] -= 1;
      
        cout << str << "\n";
    }
    return 0;
}
