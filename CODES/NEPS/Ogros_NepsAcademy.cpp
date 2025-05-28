#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;

int Binary_Search(int x, const vector<ll> &vet,int N){
    int l = 0, r = N - 2, m, ans = N - 1;
    while(l <= r){
        m = (l + r) / 2;
        if(vet[m] > x){
            ans = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return ans;
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll N, M;

    cin >> N >> M;

    vector<ll> vet(N-1);
    for(int i = 0; i < N-1; i++)
        cin >> vet[i];

    vector<ll> pts(N);  
    for (int i = 0; i < N; i++)
        cin >> pts[i];
    
    vector<ll> ans(M);
    for(int i = 0; i < M; i++){
        int x; cin >> x;
        ans[i] = pts[Binary_Search(x, vet, N)];
    }

    for(int i = 0; i < (int)ans.size(); i++){
        cout << ans[i];
        if(i < (int)ans.size() - 1)
            cout << " ";
    }
    cout << endl;
}
