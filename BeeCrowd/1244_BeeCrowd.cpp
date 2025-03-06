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
	
	int N; cin >> N;
	cin.ignore();

	string s;
	string word;
	vector<string> v;

	while(N--){

		v.clear();

		getline(cin,s);

		stringstream ss(s);

		while(ss >> word)
			v.pb(word);

		stable_sort(v.begin(), v.end(), [](string a, string b) {
            return a.size() > b.size();
        });

		for (int i = 0; i < (int)v.size(); ++i){
			cout << v[i];
			if(i < (int)v.size() - 1)
				cout << " ";
		}
		cout << endl;

	}	  
	
}
