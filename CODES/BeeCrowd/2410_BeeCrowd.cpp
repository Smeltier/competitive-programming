#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N; cin >> N;
    set<int> Numbers;
    for(int i = 0; i < N; i++){
        int temp; cin >> temp;
        Numbers.insert(temp);
    }
    cout << Numbers.size() << endl;
    return 0;
}
