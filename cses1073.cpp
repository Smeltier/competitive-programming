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

int n, k;
vector<int> vet;

int main(){ fast_io
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> k;

        int l = 0, r = (int) vet.size();
        while(l < r){
            int m = l + (r - l) / 2;
            if(vet[m] > k) r = m;
            else l = m + 1;
        }

        if(l == (int) vet.size())
            vet.pb(k);
        else vet[l] = k;
    }

    cout << (int) vet.size() << endl;

    return 0;
}