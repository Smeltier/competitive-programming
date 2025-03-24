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

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string word;
    cin >> word;

    string aux = ""; 

    for (char c : word) {
        char lower_c = tolower(c);
        if (lower_c != 'a' && lower_c != 'e' && lower_c != 'i' && lower_c != 'o' && lower_c != 'u' && lower_c != 'y') {
            aux += ".";
            aux += lower_c;
        }
    }

    cout << aux << endl;
}
