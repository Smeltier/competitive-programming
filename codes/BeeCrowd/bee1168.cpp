#include <bits/stdc++.h>
using namespace std;

int main(){
    int N; cin >> N;
    char Numero[1000000];
    for(int i = 0; i < N; i++){
        int LEDS = 0;
        cin >> Numero;
        for(int i = 0; i < strlen(Numero); i++){
            switch(Numero[i]){
                case '0':
                    LEDS += 6;
                    break;
                case '1':
                    LEDS += 2;
                    break;
                case '2':
                    LEDS += 5;
                    break;
                case '3':
                    LEDS += 5;
                    break;
                case '4':
                    LEDS += 4;
                    break;
                case '5':
                    LEDS += 5;
                    break;
                case '6':
                    LEDS += 6;
                    break;
                case '7':
                    LEDS += 3;
                    break;
                case '8':
                    LEDS += 7;
                    break;
                case '9':
                    LEDS += 6;
                    break;
            }
        }
        cout << LEDS << " leds" << endl;
    }
    return 0;
}
