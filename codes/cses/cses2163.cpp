#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

typedef long long ll;

ll n, k;

int main(){ fast_io
    cin >> n >> k;

    vector<vector<ll>> arr;

    int root = sqrt(n);
    int row = 0, col = 0, cnt = 0;
    
    vector<ll> vet;
    for(int it = 1; it <= n; ++it){
        if(cnt > root){
            cnt = 0;
            arr.push_back(vet);
            vet.clear();
        }
        vet.push_back(it);
        cnt++;
    }

    if(!vet.empty()){
        arr.push_back(vet);
        vet.clear();
    }

    for(int it = 0; it < n; ++it){
        int pos = k % (n - it);

        while(pos){
            if(col + pos < (int) arr[row].size()){
                col += pos;
                pos = 0;
            }
            else{
                pos -= (int) arr[row].size() - col;
                col = 0;
                row++;
            }

            if(row >= (int) arr.size())
                row = 0;
        }

        while((int) arr[row].size() <= col){
            col = 0;
            row++;
            if(row >= (int )arr.size())
                row = 0;
        }
    
        cout << arr[row][col] << " ";
        if(it != n - 1){
            arr[row].erase(arr[row].begin() + col);

            while((int) arr[row].size() <= col){
                col = 0;
                row++;
                if(row >= (int) arr.size())
                    row = 0;
            }
        }
    }


    return 0;
}