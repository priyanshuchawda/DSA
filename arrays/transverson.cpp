#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inser(int arr[], int &size, int index, int element) {
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    size++;
}
void deleteElement(int arr[], int &size, int index) {
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
} 
int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;
    printArray(arr, n);
    
    inser(arr, n, 5, 10);
    
    printArray(arr, n);

    deleteElement(arr, n, 2);
    
    printArray(arr, n);

    return 0;
}