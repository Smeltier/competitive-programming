#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main(){ fast_io
    set<string> jews;

    string jew;
    while(cin >> jew)
        jews.insert(jew);

    cout << jews.size() << endl;

    return 0;
}