#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int Age; cin >> Age;
    cout << Age / 365 << " ano(s)" << endl;
    Age -= 365 * (Age / 365);
    cout << Age/30 << " mes(es)" << endl;
    Age -= 30 * (Age/30);
    cout << Age << " dia(s)" << endl;
    return 0;
}
