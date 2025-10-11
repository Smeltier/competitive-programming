#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main(){ fast_io
    
    vector<double> sides(3);
    for(int it = 0; it < 3; ++it)
        cin >> sides[it];
    sort(sides.rbegin(), sides.rend());

    double a = sides[0],
           b = sides[1],
           c = sides[2];

    if(a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }

    a = pow(a, 2);
    b = pow(b, 2);
    c = pow(c, 2);
    
    if(a == b + c)
        cout << "TRIANGULO RETANGULO" << endl;

    if(a > b + c)
        cout << "TRIANGULO OBTUSANGULO" << endl;

    if(a < b + c)
        cout << "TRIANGULO ACUTANGULO" << endl;

    if(a == b and b == c)
        cout << "TRIANGULO EQUILATERO" << endl;

    if((a == b and b != c) or (b == c and c != a) or (c == a and a != b))
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}