#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi vector<int>
#define vll vector<ll>
#define endl "\n"

typedef long long ll;
typedef long double ld;

int n;
set<string> flag;

void search(string str){
    if (flag.size() == exp2(n)) 
        return;

    cout << str << endl;
    flag.insert(str);

    for (int i = n - 1; i >= 0; --i){
        string aux = str;
        aux[i] = (aux[i] == '0' ? '1' : '0' );
        if (flag.find(aux) == flag.end())
            search(aux);
    }
}

int main() { fast_io;
    cin >> n;
    string str(n, '0');
    search(str);
}