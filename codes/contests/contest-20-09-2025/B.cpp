#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main(){ fast_io
    double x, y;
    cin >> x >> y;

    if(x == 0.0 and y == 0.0)
        cout << "Origem" << endl;
    else if(x > 0.0 and y > 0.0)
        cout << "Q1" << endl;
    else if(x < 0.0 and y > 0.0)
        cout << "Q2" << endl;
    else if(x < 0.0 and y < 0.0)
        cout << "Q3" << endl;
    else if(x > 0.0 and y < 0.0)
        cout << "Q4" << endl;
    else if(x == 0.0 and y != 0.0)
        cout << "Eixo Y" << endl;
    else if(x != 0.0 and y == 0.0)
        cout << "Eixo Y" << endl;

    return 0;
}