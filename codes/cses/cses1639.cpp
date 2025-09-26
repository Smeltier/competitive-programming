#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

int distance(string str1, string str2){
    int m = (int) str1.length();
    int n = (int) str2.length();

    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for(int it = 0; it <= m; ++it)
        dp[it][0] = it;
    for(int it = 0; it <= n; ++it)
        dp[0][it] = it;

    for(int i = 1; i <= m; ++i)
        for(int j = 1; j <= n; ++j)
            if(str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else dp[i][j] = 1 + min(dp[i][j - 1], 
                                min(dp[i - 1][j], 
                                    dp[i - 1][j - 1]));

    return dp[m][n];                        
}

int main(){ fast_io
    string str1, str2;

    cin >> str1;
    cin >> str2;

    cout << distance(str1, str2) << endl;

    return 0;
}