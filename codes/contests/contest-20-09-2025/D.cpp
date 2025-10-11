#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main(){ fast_io
    int start, end;
    cin >> start >> end;

    if(end <= start)
        end += 24;

    cout << "O JOGO DUROU " << abs(end - start) << "HORA(S)" << endl;

    return 0;
}