#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;

double distance(int x1, int y1, int x2, int y2){
    ll dx = x1 - x2;
    ll dy = y1 - y2;
    return sqrt(dx * dx + dy * dy);
}

int main(){ fast_io
    int tc;
    cin >> tc;

    while(tc--){
        vector<pair<int, int>> pt(3);
        for(int it = 0; it < 3; ++it)
            cin >> pt[it].first >> pt[it].second;

        double ans = 0.0;

        

        cout << fixed << setprecision(12) << ans << endl;

    }


    return 0;
}