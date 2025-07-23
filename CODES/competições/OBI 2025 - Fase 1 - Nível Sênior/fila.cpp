#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<int> vet(n);
    for(int i = 0; i < n; i++)  
        cin >> vet[i];

    int ans = 0, maior = vet[n - 1];
    for(int i = n - 1; i > 0; --i)
        if(maior >= vet[i-1]) ans++;
        else maior = vet[i - 1];

    cout << ans << endl;
}