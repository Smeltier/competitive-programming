#include <bits/stdc++.h>
using namespace std;

int main(){

    int T; scanf("%d", &T);
    cin.ignore();

    while(T--){

        stack<char> x;
        string exp; getline(cin, exp);

        if ((int)exp.size() % 2 != 0){
            printf("N\n");
            continue;
        }

        bool test = true;

        for (auto &p : exp){

            if(p != ']' && p != ')' && p != '}')
                x.push(p);

            if( (!x.empty()) && ( p == ']' || p == ')' || p == '}') ){

                if(x.top() == '[' && p == ']')
                    x.pop();
                else if(x.top() == '(' && p == ')')
                    x.pop();
                else if(x.top() == '{' && p == '}')
                    x.pop();
                else{
                    test = false;
                    break;
                }   
            }
        }

        if(!x.empty())
            test = false;
    
        if(test)
            printf("S\n");
        else
            printf("N\n");
    
    }

    return 0;
}
