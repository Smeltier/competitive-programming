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

const int maxn = 1e5+10;
const int INF = 1e9 + 10;

int n;
vector<int> vet;
set<int> sub;
set<set<int>> tes;

void search(int i){
    if(i == (int) vet.size()){
        tes.insert(sub);
        return;
    }
    search(i + 1);
    sub.insert(vet[i]);
    search(i + 1);
    sub.erase(vet[i]);
}

int main(){ fast_io
    cin >> n;

    vet.resize(n);
    for(int i = 0; i < n; ++i)
        cin >> vet[i];

    search(0);

    cout << (int) tes.size() << endl;
}