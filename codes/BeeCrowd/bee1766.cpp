#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;

struct Reindeer{
    string name;
    int weight;
    int age;
    float height;
};

bool compare(Reindeer x, Reindeer y){
    if(x.weight != y.weight)
        return x.weight > y.weight;
    if(x.age != y.age)
        return x.age < y.age;
    if(x.height != y.height)
        return x.height < y.height;
    return x.name < y.name;
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t; cin >> t;
    for (int i = 1; i <= t; i++){

        int n, m;
        cin >> n >> m;

        vector<Reindeer> rein(n);
        for(int j = 0; j < n; j++)
            cin >> rein[j].name >> rein[j].weight >> rein[j].age >> rein[j].height;

        sort(rein.begin(), rein.end(), compare);

        cout << "CENARIO {" << i << "}" << endl;
        for (size_t j = 0; j < m; j++)
            cout << j + 1 << " - " << rein[j].name << endl;

    }

}
