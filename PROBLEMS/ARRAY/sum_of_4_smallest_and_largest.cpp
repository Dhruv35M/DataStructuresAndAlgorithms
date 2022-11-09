// find sum of four smallest and 4 largest elements in an array

#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n) {
    int sum {0};
    sort(arr, arr+n);

    for(int i{0}; i<4; i++) {
        sum += arr[i];
    }

    for(int i{n-1}; i>n-5; i--) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<< sum(arr, 10);
    return 0;
}