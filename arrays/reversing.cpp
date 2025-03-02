#include <iostream>
using namespace std;

// Iterative method
// 5,4,3,2,1
// 1 5 
//2 4
// 3 
void reverseArrayIterative(int arr[], int size) {
    int temp=0;
    for (int i = 0; i < size/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;

    }
    
}


void reverseArrayIterative_2pointers(int arr[], int size) {
    int left=0;
    int right=size-1;
    while(right>left){
        
        arr[left]=arr[left]+arr[right];
        arr[right]=arr[left]-arr[right];
        arr[left]=arr[left]-arr[right];

        left++;
        right--;    
    }

}
void reverseArrayRecursive(int arr[], int left, int right) {
    if (left >= right) return;
    swap(arr[left], arr[right]);
    reverseArrayRecursive(arr, left + 1, right - 1);
}


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Original array: ";
    printArray(arr, size);

    reverseArrayIterative(arr, size);
    cout << "After iterative reverse: ";
    printArray(arr, size);

    reverseArrayIterative_2pointers(arr, size);
    cout << "After iterative reverse using 2 pointers: ";
    printArray(arr, size);

    reverseArrayRecursive(arr, 0, size - 1);
    cout << "After recursive reverse: ";
    printArray(arr, size);
    
    return 0;
}