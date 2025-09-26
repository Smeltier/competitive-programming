#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int n, k;
int max_mnt = 0; // Maior altura que eu tenho dentre as minhas n montanhas.
vector <int> mnt;

bool flag(int m) {
    int k_need = 0, // k_need => A quantidade de k que eu preciso para deixar as montanhas com a altura m.
        diff = 0;   // diff => diferença da altura das montanhas. Simula o efeito escada dito no problema.

    for(int i = n - 1; i >= 0; --i) {
        int height = mnt[i] + diff; // height => altura atual da montanha i.

        // Se minha altura atual não for maior ou igual a m eu tenho que aumentar a altura dela.
        if(height < m) {
            int needed = m - height; // needed => o quanto que eu preciso aumentar a altura da montanha i.

            k_need += needed;

            if(k_need > k) // Se a quantidade de k que eu preciso for maior do que eu tenho não posso usar esse valor de m.
                return false;

            diff += needed;

            if(i > 0) diff -= 1; // Efeito escadinha.
        }
    }

    return true;
}

int bs() {
    int l = 0, r = max_mnt + k, ans = 0;

    // A maior altura de montanha que podemos ter é a maior altura + k.

    while(l <= r) {
        int m = l + (r - l) / 2;

        if(flag(m)) {
            ans = m;
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }

    return ans;
}

int main(){ fast_io
    cin >> n >> k;

    mnt.resize(n);
    for(auto &it : mnt){
        cin >> it;
        max_mnt = max(max_mnt, it);
    }

    cout << bs() << endl;

    return 0;
}