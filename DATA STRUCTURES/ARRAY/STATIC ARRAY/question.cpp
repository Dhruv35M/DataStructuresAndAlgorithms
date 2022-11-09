// sum of array, min and max in array

#include <iostream>
using namespace std;
#define nline "\n"

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) cout<<arr[i]<<" ";
    cout<<"\n";
}

// function prototype
int sum(int [], int);
int min(int [], int);
int max(int [], int);

int main() {
    int arr[] = {12, 123, 434, 454, 7, -53, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    print(arr, n);

    cout<<"minimum value in array: "<<min(arr, n)<<nline;
    cout<<"maximum value in array: "<<max(arr, n)<<nline;

    return 0;
}

int sum(int arr[], int n) {
    int sum {};
    for(int i{0}; i<n; i++) sum+= arr[i];
    return sum;
}

int min(int arr[], int n) {
    int min = INT_MAX;
    for(int i{0}; i<n; i++) {
        if(arr[i] < min) min = arr[i];
    }
    return min;
}

int max(int arr[], int n) {
    int max = INT_MIN;
    for(int i{0}; i<n; i++) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}
