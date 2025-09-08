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

int main(){ fast_io;

    int n; cin >> n;

    float cnt = 0.0;
    for(int i = 1; i <= 6; i++)
        for(int j = 1; j <= 6; j++)
            for(int k = 1; k <= 6; k++)
                if(i + j + k == n)
                    cnt++;

    cout << fixed << setprecision(12);
    cout << cnt / 216 << endl;
}