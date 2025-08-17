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

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    vector<pair<int,int>> rows(n);
    for (int i = 0; i < n; i++){
        cin >> rows[i].F;
        rows[i].S = i + 1;
    }
    srt(rows);

    string pass;
    cin >> pass;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> emp;
    for (int i = 0; i < n; i++)
        emp.push(rows[i]);    

    priority_queue<pair<int,int>> use;

    vector<int> ans;
    for(char p : pass){

        if(p == '0'){
            pair<int, int> tmp = emp.top();
            int w = tmp.first;
            int idx = tmp.second;
            emp.pop();
            use.push({w,idx});
            ans.pb(idx);
        }
        else{
            pair<int, int> tmp = use.top();
            int w = tmp.first;
            int idx = tmp.second;
            use.pop();
            ans.pb(idx);
        }
        
    }

    for(auto a : ans)
        cout << a << " ";
    cout << endl;

}
