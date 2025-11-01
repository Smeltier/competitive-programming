#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int main(){ fast_io
    int n;
    cin >> n;

    vector <int> vet (n);
    for(int i = 0; i < n; ++i) 
        cin >> vet[i];

    sort(vet.begin(), vet.end());

    ll sum = 1;
    for(auto &it : vet) {
        if(it > sum) break;
        sum += it;
    }

    cout << sum << endl;

    return 0;
}