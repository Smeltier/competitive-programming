#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

string str;

ll ways = 0;
void bt(string s, int size) {
    if(size == (int) str.size())
        ways++;
    for (int i = 0; i < (int) str.size(); ++i) {
        if (i != 0 and s[i - 1] != s[i]) {
            s.push_back(str[i]);
            bt(s, size + 1);
            s.pop_back(str[i]);
        }
        else if(i == 0) {
            s.push_back(str[i]);
            bt(s, size + 1);
            s.pop_back();
        }
    }
}

int main(){ fast_io
    cin >> str;

    bt("", 0);

    cout << ways << endl;

    return 0;
}