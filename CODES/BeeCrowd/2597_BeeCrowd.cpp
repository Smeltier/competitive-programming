#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, c, x, y;
    cin >> l >> c >> x >> y;
    string ans;
    if((c-1) % 2 != 0){
        if(y % 2 != 0)
            ans = "Esquerda";
        else
            ans = "Direita";
    }
    else{
        if(x % 2 != 0){
            if(y % 2 != 0)
                ans = "Direita";
            else
                ans = "Esquerda";
        }else{
            if(y % 2 != 0)
                ans = "Esquerda";
            else    
                ans = "Direita";
        }
    }
    cout << ans << endl;
    return 0;
}
