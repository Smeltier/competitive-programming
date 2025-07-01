#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int mp = 1;
    bool flag = true;
    while(flag){
        int aux = c - mp * d; 
        cerr << aux << endl;
        if(aux >= a && aux <= b)
            break;
        if(aux <= 0){
            flag = false;
            break;
        }
        mp++;
    }

    if(flag) cout << "S" << endl;
    else cout << "N" << endl;
}