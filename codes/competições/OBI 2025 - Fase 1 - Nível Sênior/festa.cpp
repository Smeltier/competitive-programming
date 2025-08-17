#include <bits/stdc++.h>
using namespace std;

int main(){
    int e, s, l;
    cin >> e >> s >> l;
    cout << min(abs(e - s) + abs(s - l) + abs(l - e), 
            abs(e - l) + abs(l - s) + abs(s - e)) << endl;
}