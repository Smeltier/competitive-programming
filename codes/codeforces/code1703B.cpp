#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define endl "\n"

typedef long long ll;



int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        set<char> ballon;
        char aux;
        for (int i = 0; i < n; i++){
            cin >> aux;
            ballon.insert(aux);
        }

        cout << n + (int)ballon.size() << endl;

    }

}
