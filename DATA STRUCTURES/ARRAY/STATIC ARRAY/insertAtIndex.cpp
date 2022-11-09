// Arrays are fixed in size, so if array is full we can't insert more elements, we have to create a new array with more size and copy all element to the new array then insert

#include <iostream>
using namespace std;
#define size 10

int main() {
    int arr[size] = {1, 20, 5, 78, 30};
    int element, pos, i;
    int usedSize = 5;
    cout<<"Enter position and element\n";
    cin>>pos>>element;

    if(pos <= size && pos >= 0)
    {
        //shift all the elements from the last index to pos by 1 position to right
        for(i = size; i > pos; i--)
            arr[i] = arr[i-1];

        //insert element at the given position
        arr[pos] = element;

        // the new array size will be usedSize+1
        usedSize++;
    
        for(int i{0}; i<usedSize; i++) cout<<arr[i]<<" ";
        cout<<"\n";
    }
    else
        printf("Invalid Position\n");
    
    return 0;
}