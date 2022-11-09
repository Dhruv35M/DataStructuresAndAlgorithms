// Find the minimum number of jumps to reach the end of the array -> https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1?page=1&category[]=Arrays&category[]=Strings&sortBy=submissions

#include <iostream>
using namespace std;

int minJumps(int arr[], int n);

int main() {

    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<< minJumps(arr, n);
    return 0;
}

int minJumps(int arr[], int n) {
    if(n <= 1) return 0;
    if(arr[0] == 0) return -1;

    int maxReach = arr[0];
    int step = arr[0];
    int jumps = 1;

    for(int i{1}; i<n; i++) {
        if(i == n-1) return jumps;

        maxReach = max(maxReach, i + arr[i]);
        step--;

        if(step == 0) {
            jumps++;

            if(i >= maxReach) return -1;
            step = maxReach - i;
        } 
    }

    return -1;
}
