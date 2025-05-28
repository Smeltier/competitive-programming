#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;
typedef unsigned ui;

template <typename T>
int Smaller(const vector<T> &X, T k){
    int l = 0, r = (int)X.size() - 1, ans = -1;
    while(l <= r){
        int m = (l+r) / 2;
        if(X[m] < k){
            ans = X[m];
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return ans;
}

template <typename T>
int Larger(const vector<T> &X, T k){
    int l = 0, r = (int)X.size() - 1, ans = -1;
    while(l <= r){
        int m = (l+r) / 2;
        if(X[m] > k){
            ans = X[m];
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return ans;
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ui n, m, aux, s, l;
    while(cin >> n){
        vector<ui> num(n);
        for(ui i = 0; i < n; i++)
            cin >> num[i];
        
        sort(num.begin(), num.end());

        cin >> m;
        while(m--){
            cin >> aux;

            s = Smaller(num, aux);
            l = Larger(num,aux);

            if(s == -1)
                cout << "X";
            else
                cout << s;

            cout << " ";

            if(l == -1)
                cout << "X";
            else
                cout << l;
            
            cout << endl;
        }
    }

    return 0;
}
