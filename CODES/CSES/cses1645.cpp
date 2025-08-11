#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define present(c, a) (c.find(a) != c.end())
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int ui;

int main(){ fast_io

    int n; cin >> n;

    vector<int> ans(n, 0), vet(n);
    for(int i = 0; i < n; ++i){
        cin >> vet[i];
        int aux = 0;
        for(int j = i - 1; j >= 0; --j)
            if(vet[j] < vet[i]){
                aux = j + 1;
                break;
            }
        ans[i] = aux;
    }

    for(auto &a : ans)
        cout << a << " ";
    cout << endl;

}