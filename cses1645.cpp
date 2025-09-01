#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int main(){ fast_io
    int n;
    cin >> n;

    vector<ll> arr(n);
    for(auto &i : arr)
        cin >> i;

    stack<ll> p;
    for(int it = 0; it < n; ++it){
        while(not p.empty() and arr[p.top()] >= arr[it])
            p.pop();

        if(p.empty()) cout << 0 << " ";
        else cout << p.top() + 1 << " ";

        p.push(it);
    }

    return 0;
}