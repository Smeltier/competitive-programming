#include <bits/stdc++.h>
using namespace std;

int binary_search (vector <int> & array, int value) {
    int left = 0, right = (int) array.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if(array[mid] == value) return mid;
        if(array[mid] > value) right = mid - 1;
        else left = mid + 1;
    }
    return -1;
}

int main() {

    int n, x;
    vector <int> array (n);

    int k = 0;
    for (int b = n / 2; b >= 1; b /= 2) {
        while (k + b < n and array[k + b] <= x)
            k += b;
    }

    if(array[k] == x) cout << "encontrou." << endl;



    return 0;
}