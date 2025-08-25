#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int main(){ fast_io
    int n; cin >> n;

    ll steps = 0;
    while(n > 0){
        string num = to_string(n);
        int num_size = (int)num.size();

        int num_min = INT_MAX;
        for(int it = 0; it < num_size; ++it)
            num_min = min(num_min, n - (num[it] - '0'));

        n = num_min;

        steps++;
    }

    cout << steps << endl;

    return 0;
}