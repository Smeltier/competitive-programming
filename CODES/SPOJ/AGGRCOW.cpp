#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;

int t, n, c;
int aux, ans;
vector<int> vet;

bool Check(int x){

    int cow = 1;
    aux = vet[0];
    
    for(int i = 1; i < n; i++){
        if((vet[i] - aux) >= x){
            cow++;
            aux = vet[i];
        }
    }

    if(cow >= c)
        return true;

    return false;
}

void Binary_Search(int l, int r){
    ans = -1;
    while(l <= r){
        int m = (l+r) / 2;

        if(Check(m)){
            if(m > ans)
                ans = m;
            l = m + 1;
        }       
        else
            r = m - 1;
    }
}

int32_t main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> t;
    while(t--){

        cin >> n >> c;

        vet.clear();
        vet.resize(n);
        for(int i = 0; i < n; i++)
            cin >> vet[i];
        sort(vet.begin(), vet.end());
        
        Binary_Search(0, vet[n-1]);

        cout << ans << endl;

    }

    return 0;
}
