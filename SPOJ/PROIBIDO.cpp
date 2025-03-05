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

	int N, aux; 

	cin >> N;
	set<int> s;

	for (int i = 0; i < N; ++i){
		cin >> aux;
		s.insert(aux);
	}

	int M;

	while(cin >> M){
		if(s.find(M) != s.end())
			cout << "sim" << endl;
		else
			cout << "nao" << endl;
	}

}
