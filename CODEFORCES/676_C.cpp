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
typedef long double ld;

int n, k; 
vector<char> str;

int solve(char varm){
    int ans = 0;
    for(int l = 0, r = 0, cnt = 0; l < n; l++){
        while(r < n && cnt <= k){
            if(str[r] != varm)
                cnt++;
            if(cnt <= k) 
                ans = max(ans, r - l + 1);
            r++;
        }
        if(str[l] != varm)
            cnt--;
    }
    return ans;
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n >> k;

    str.resize(n);
    for(int i = 0; i < n; i++)
        cin >> str[i];

    cout << max(solve('a'), solve('b')) << endl;

}