#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

typedef long long ll;

struct Student
{
    string name;
    char size;
    string detail;
};

bool compare(Student x, Student y){
    if(x.detail != y.detail)
        return x.detail < y.detail;
    if(x.size != y.size)
        return x.size > y.size;
    return x.name < y.name;
}

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    bool lineb = true;

    cin >> n;
    while(n != 0){

        if(!lineb)
            cout << endl;
        lineb = false;

        vector<Student> students(n);
        for (int i = 0; i < n; i++){
            cin.ignore();
            getline(cin, students[i].name);
            cin >> students[i].detail >> students[i].size;
        }
        
        sort(students.begin(), students.end(), compare);

        for (int i = 0; i < n; i++)
            cout << students[i].detail << " " << students[i].size << " " << students[i].name << endl;        

        cin >> n;

    }

}
