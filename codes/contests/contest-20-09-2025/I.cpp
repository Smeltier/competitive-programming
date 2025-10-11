#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

ll fat(int num, int tax){
    if(num <= 0) return 1;
    return num * fat(num - tax, tax);
}

int main(){ fast_io
    int tc;

    cin >> tc;
    while(tc--){
        string test;
        cin >> test;

        int t = 0, ap = INT_MAX;
        for(int i = 0; i < (int) test.length(); ++i){
            if(test[i] == '!'){
                t++;
                ap = min(ap, i);
            }
        } 

        test.erase(test.begin() + ap, test.end());

        int num = stoi(test);

        cout << fat(num, t) << endl;
    }
    
    return 0;
}