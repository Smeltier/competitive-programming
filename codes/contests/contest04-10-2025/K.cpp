#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int main(){ fast_io
    int tc;
    cin >> tc;

    while(tc--) {
        int n;
        cin >> n;

        ll start = 1001;
        cout << start << " ";

        int num;
        for(int i = 2; i <= n; ++i) {
            cin >> num;

            start += num;

            cout << start << " ";
        }

        cout << endl;
    }

    return 0;
}

// TC 1 -> 2 4 1

// a1 = 1000 + 1 = 1001
// a2 = 1001 + 2 = 1003
// a3 = 1003 + 4 = 1007
// a4 = 1007 + 1 = 1008

// a2 % a1 = 1003 % 1001 = 2
// a3 % a2 = 1007 % 1003 = 4
// a4 % a3 = 1008 % 1007 = 1

// TC 2 -> 1 1

// a1 = 1000 + 1 = 1001
// a2 = 1001 + 1 = 1002
// a3 = 1002 + 1 = 1003

// a2 % a1 = 1002 % 1001 = 1
// a3 % a2 = 1003 % 1002 = 1

// TC 3 -> 4 2 5 1 2

// a1 = 1000 + 1 = 1001
// a2 = 1001 + 4 = 1005
// a3 = 1005 + 2 = 1007
// a4 = 1007 + 5 = 1012
// a5 = 1012 + 1 = 1013
// a6 = 1013 + 2 = 1015

// a2 % a1 = 1005 % 1001 = 4
// a3 % a2 = 1007 % 1005 = 2
// a4 % a3 = 1012 % 1007 = 5
// a5 % a4 = 1013 % 1012 = 1
// a6 % 15 = 1015 % 1013 = 2