#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
using ll = long long;
const ll INFLL = LLONG_MAX;

struct Sparse {
    int n, K;
    vector<vector<ll>> st;
    vector<int> lg;
    Sparse(const vector<ll>& v) {
        n = v.size();
        K = (n > 0) ? (32 - __builtin_clz(n)) : 1;
        st.assign(K, vector<ll>(n, INFLL));
        lg.assign(n + 1, 0);
        for (int i = 2; i <= n; ++i) lg[i] = lg[i/2] + 1;
        if (n == 0) return;
        for (int i = 0; i < n; ++i) st[0][i] = v[i];
        for (int k = 1; k < K; ++k) {
            for (int i = 0; i + (1<<k) <= n; ++i) {
                st[k][i] = min(st[k-1][i], st[k-1][i + (1 << (k-1))]);
            }
        }
    }
    ll query(int l, int r) {
        if (l > r) return INFLL;
        int len = r - l + 1;
        int k = lg[len];
        return min(st[k][l], st[k][r - (1<<k) + 1]);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    if (!(cin >> N >> K)) return 0;
    vector<ll> h(N);
    for (int i = 0; i < N; ++i) cin >> h[i];

    vector<ll> pref(N), suff(N);
    pref[0] = h[0];
    for (int i = 1; i < N; ++i) pref[i] = min(pref[i-1], h[i]);
    suff[N-1] = h[N-1];
    for (int i = N-2; i >= 0; --i) suff[i] = min(suff[i+1], h[i]);

    vector<ll> shifted(N);
    for (int j = 0; j < N; ++j) shifted[j] = h[j] + j;

    Sparse st(shifted);

    ll ans = LLONG_MIN;
    for (int i = 0; i < N; ++i) {
        int L = max(0, i - K + 1);

        ll outside = INFLL;
        if (L > 0) outside = min(outside, pref[L-1]);
        if (i + 1 < N) outside = min(outside, suff[i+1]);

        ll min_shifted = st.query(L, i);
        ll inside = (min_shifted == INFLL) ? INFLL : (min_shifted + ((ll)K - (ll)i));

        ll cur = min(outside, inside);
        ans = max(ans, cur);
    }

    cout << ans << '\n';
=======

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

>>>>>>> 13d488d699c1169d1faa7e47922586610e8eebc5
    return 0;
}