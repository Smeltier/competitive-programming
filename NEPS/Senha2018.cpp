#include <bits/stdc++.h>
using namespace std;

int main(){
    int Guess, Counter = 0;
    cin >> Guess;
    if(Guess == 2018){
        cout << Counter << endl;
        return 0;
    }
    while(Guess != 2018){
        cin >> Guess;
        Counter++;
    }
    cout << Counter << endl;
    return 0;
}
