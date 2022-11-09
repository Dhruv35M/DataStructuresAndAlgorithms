// Array
// 1) List of similar type of items
// 2) stored in contiguous memory location
// 3) can be assessed by index
// 4) fixed size

// WHY: -> store multiple values in single variable

// ARRAY IMPLEMENTATION

#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i{0}; i<n; i++) cout<<arr[i]<<" ";
    cout<<"\n";
}

int main() { 
    
    // int nums[] = {1, 2, 3, 4, 5};
    // nums repesents fist Element's Address

    // cout<<nums[2];
    // nums[3] = 343;
    // cout<<nums[3];

    int arr[5] {0};
    cout<<"Enter 5 Elements: ";
    for(int i{0}; i<5; i++) {
        cin>>arr[i];
    }

    print(arr, 5);

    // BAD PRACTICE
    // int n;
    // cin>>n;
    // int arr[n];
    
    return 0;
}