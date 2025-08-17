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

#define sz 100

int main(){ fast_io
    int n; cin >> n;

    int mat[sz][sz];
    memset(mat, 0, sizeof n);

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            bool flag[sz * 2] = {false};

            for(int k = 0; k < j; ++k)
                flag[mat[i][k]] = true;
            
            for(int k = 0; k < i; ++k)
                flag[mat[k][j]] = true;

            int aux = 0;
            while(flag[aux]) ++aux;

            mat[i][j] = aux;
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}