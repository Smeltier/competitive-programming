#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main(){ fast_io
    double total;

    char op;
    cin >> op;
    cin.ignore();

    for(int i = 0; i < 12; ++i)
        for(int j = 0; j < 12; ++j){
            double num;
            cin >> num;

            if(j > i) total += num;
        }

    if(op == 'S')
        cout << total << endl;
    if(op == 'M')
        cout << (total / 66) << endl;

    return 0;
}