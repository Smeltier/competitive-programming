<<<<<<< HEAD
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

    int sum = 0;
    for(int i = 0; i < n; ++i){
        int aux; cin >> aux;
        sum += aux;
    }

    cout << sum / n << endl;

    return 0;
=======
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
    ll n; cin >> n;
    
    vector<ll> vet(n);
    for(int i = 0; i < n; ++i)
        cin >> vet[i];
    srt(vet);
    
    ll md = vet[n / 2];

    ll ans = 0;
    for(int i = 0; i < n; ++i)
        ans += abs(vet[i] - md);

    cout << ans << endl;

    return 0;
>>>>>>> cd2ed3da39136ad7a8f2675421ec212aff4adecc
}