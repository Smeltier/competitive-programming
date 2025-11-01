#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

const ll INF = 1e18;

bool palindrome (string str, int start, int end) {
    int l = start - 1, r = end - 1;
    while (l <= r) {
        if (str[l] != str[r]) 
            return false;
        l++; r--;
    }
    return true;
}

int main () { fast_io
    int n, m;
    cin >> n >> m;

    string str;
    cin >> str;

    char ch;
    int k, a, b;
    
    while (m--) {
        cin >> k;

        if (k == 1) {
            cin >> a >> ch;
            str[a - 1] = ch;
            continue;
        }

        cin >> a >> b;
        bool result = palindrome(str, a, b);
        cout << (result ? "YES" : "NO") << endl;
    }

    return 0;
}