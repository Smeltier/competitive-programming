#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

struct Car {
    int a, b;
    Car(int a, int b) : a(a), b(b) {}
};

stack<Car> Cs;
vector<Car> Cv;

int32_t main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, k;
    while(cin >> n >> k && (n != 0 && k != 0)) {

        bool test = true;
        Cv.clear();
    
        for(int i=0; i<n; i++) {
            int a, b; cin >> a >> b;
        
            int time = 0;
            while(Cs.size() > 0 && a >= Cs.top().b) {
                test = test && (Cs.top().b >= time);
                time = Cs.top().b;
                Cs.pop();
            }
        
            test = test && (Cs.size() < k);
            Cs.push(Car(a, b));
        }
    
        int tmp = 0;
        while(Cs.size() > 0) {
            test = test && Cs.top().b >= tmp;
            tmp = Cs.top().b;
            Cs.pop();
        }
    
        cout << ( test ? "Sim" : "Nao" ) << endl;
    }

    return 0;
}
