#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int bSize, s, cont = 1;
    bool Test = true;

    while (true) {
        cin >> bSize >> s;
        if (bSize + s == 0)
            break;

        if (!Test) cout << endl;
        Test = false;

        cout << "Teste " << cont++ << endl;

        vector<pair<int, int>> ans(s);
        for (int i = 0; i < s; i++)
            cin >> ans[i].F >> ans[i].S;

        sort(ans.begin(), ans.end());

        int start = ans[0].F;
        int end = ans[0].S;

        for (int i = 1; i < s; i++) {
            if (ans[i].F > end) {
                cout << start << " " << end << endl;
                start = ans[i].F;
                end = ans[i].S;
            } else {
                end = max(end, ans[i].S);
            }
        }

        cout << start << " " << end << endl;
    }
    cout << endl;
}
