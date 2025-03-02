#include <iostream>
using namespace std;

void deleteAtPosition(int arr[], int &size, int pos) {
    if (size == 0) {
        cout << "Array is empty, cannot delete.\n";
        return;
    }
    if (pos < 0 || pos >= size) {
        cout << "Invalid position.\n";
        return;
    }

    for (int i = pos-1; i< size; i++)
    {
        arr[i]=arr[i+1];
    }
    size--;

    
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

    cout << "Before deletion: ";
    printArray(arr, size);

    // Delete from middle (index 2)
    deleteAtPosition(arr, size, 2);
    cout << "After deleting element at index 2: ";
    printArray(arr, size);

return 0;
}