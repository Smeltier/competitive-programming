#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define srt(x) sort(all(x))
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi vector<int>
#define vll vector<ll>
#define endl "\n"

typedef long long ll;
typedef long double ld;



int main(){ fast_io;

    vector<vector<int>> mt(8, vector<int> (8, 0));

    char ch;
    for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++){
            cin >> ch;
            if(ch == '*') mt[i][j] = -1;
        }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++)
            cout << mt[i][j] << " ";
        cout << endl;
    }
        

}