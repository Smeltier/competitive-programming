#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int N; cin >> N;
    for(int i = 0; i < N; i++){
        long long Number; cin >> Number;
        bool Prime = true;
        for(int i = 2; pow(i,2) <= Number; i++)
        {
            if(Number % i == 0){
                Prime = false;
                break;
            }
        }
        if(Prime) printf("Prime\n");
        else printf("Not Prime\n");
    }
    return 0;
}
