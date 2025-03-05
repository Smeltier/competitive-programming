#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"


int32_t main(){

	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	unordered_map<int,int> m;
	vector<int> o;
	int n;

	while(cin >> n){
		if(m[n] == 0){
			o.pb(n);
		}
		m[n]++;
	}

	for (int i = 0; i < (int)o.size(); i++)
		cout << o[i] << " " << m[o[i]] << endl; 
}
