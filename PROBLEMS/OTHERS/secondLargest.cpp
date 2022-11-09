// second largest element in an array

#include <iostream>
using namespace std;

int secondLargest(int arr[], int n) {
    int largest = INT_MIN;
    int secondLarge = INT_MIN;

    // finding the largest number
    for(int i{0}; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    // finding the second largest number
    for(int i{0}; i<n; i++) {
        if(arr[i] > secondLarge && arr[i] < largest) {
            secondLarge = arr[i];
        }
    }

    return secondLarge;
}

int main() {
    int arr[] {12, 12, 3, 43, 5, 46, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<< secondLargest(arr, n);

    return 0;
}