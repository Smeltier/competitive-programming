#include <bits/stdc++.h>
using namespace std;

int main() {
    int casos;
    cin >> casos;
    
    while (casos--) {
        string str1, str2;
        cin >> str1 >> str2;
        int total = 0;
        for (size_t i = 0; i < str1.size(); ++i) {
            int temp = str2[i] - str1[i];
            if (temp < 0) total += temp + 26;
            else total += temp;
        }
        cout << total << endl;
    }

    return 0;
}
