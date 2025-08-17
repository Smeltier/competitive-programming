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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        unordered_set<int> test;
        int aux = n - 1;

        while(aux >= 0){

            if(test.count(arr[aux]))
                break;
            test.insert(arr[aux]);
            aux--;
        }

        cout << aux + 1 << endl;

    }
}
