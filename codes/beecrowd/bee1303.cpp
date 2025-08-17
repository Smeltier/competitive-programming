#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"
#define MAXS 110

struct Teams {
    int id;
    int points;
    int marked;
    int received;

    Teams(int id = 0, int points = 0, int marked = 0, int received = 0)
        : id(id), points(points), marked(marked), received(received) {}
};

bool compare(const Teams& t1, const Teams& t2) {
    if (t1.points == t2.points) {
        double ratio1 = (t1.received == 0) ? t1.marked : (double)t1.marked / t1.received;
        double ratio2 = (t2.received == 0) ? t2.marked : (double)t2.marked / t2.received;
        if (ratio1 == ratio2) {
            return t1.id < t2.id;
        }
        return ratio1 > ratio2;
    }
    return t1.points > t2.points;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, cont = 0;
    cin >> n;

    vector<Teams> tm(MAXS);

    while (n != 0) {

        cont++;

        tm.assign(MAXS, Teams());

        for (int i = 1; i <= n; i++) {
            tm[i].id = i;
        }

        int aux = (n * (n - 1)) / 2;

        for (int i = 0; i < aux; i++) {
            int x, y, z, w;
            cin >> x >> y >> z >> w;

            if (y > w) {
                tm[x].points += 2;
                tm[z].points += 1;
            } else {
                tm[z].points += 2; 
                tm[x].points += 1;
            }

            tm[x].marked += y;
            tm[x].received += w;
            tm[z].marked += w;
            tm[z].received += y;
        }

        sort(tm.begin() + 1, tm.begin() + n + 1, compare);

        cout << "Instancia " << cont << endl;
        for (int i = 1; i <= n; i++) {
            cout << tm[i].id;
            if(i < n)
                cout << " ";
        }
        cout << endl;

        cin >> n;
        if(n != 0)
            cout << endl;
        
    }

    return 0;
}
