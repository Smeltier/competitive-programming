#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main(){ fast_io
    int n, m;
    cin >> n >> m;

    vector <int> max_nums(m, 0);

    int num;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> num;

            max_nums[j] = max(max_nums[j], num);
        }
    }

    int sum = 0;
    for(auto &it : max_nums)
        sum += it;

    cout << sum << endl;

    return 0;
}