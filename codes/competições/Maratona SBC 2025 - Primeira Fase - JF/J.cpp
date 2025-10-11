#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

int main(){ fast_io
    const int max_size = 10,
              nums_cnt = 4;

    vector <int> vet(nums_cnt + 1, 0);

    int num;
    for(int i = 0; i < max_size; ++i){
        cin >> num;

        vet[num]++;    
    }

    int cnt = 0;
    for(int it = 1; it <= nums_cnt; ++it)
        if(vet[it] == 0) cnt++;

    cout << cnt << endl;

    return 0;
}