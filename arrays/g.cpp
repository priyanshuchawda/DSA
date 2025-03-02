#include <iostream>
using namespace std;

void insertAtPosition(int arr[], int &size, int capacity, int pos, int value) {
    if (size >= capacity) {
        cout << "Array is full, cannot insert.\n";
        return;
    }
    if (pos < 0 || pos > size) {
        cout << "Invalid position.\n";
        return;
    }
    // Shift elements to the right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    size++;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int capacity = 10;
    int arr[10] = {1, 2, 4, 5};  // Initial array
    int size = 4;

    cout << "Before insertion: ";
    printArray(arr, size);

    // Insert 3 at position 2 (Middle)
    insertAtPosition(arr, size, capacity, 2, 3);
    cout << "After inserting 3 at position 2: ";
    printArray(arr, size);

  

    return 0;
}
