//    Gray Code - Cses 2205 (by Smeltier)
//    https://cses.fi/problemset/task/2205/

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define max(a,b) (a<b?b:a)
#define abs(a) (a<0?(-a):a)
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
set<string> flag;

void search(string str){
    if (flag.size() == exp2(n)) 
        return;

    cout << str << endl;
    flag.insert(str);

    for (int i = n - 1; i >= 0; --i){
        str[i] = (str[i] == '0' ? '1' : '0' );
        if (flag.find(str) == flag.end())
            search(str);
        str[i] = (str[i] == '0' ? '1' : '0' );
    }
}

int main() { fast_io;
    cin >> n;
    string str(n, '0');
    search(str);
}