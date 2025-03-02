#include <iostream>
using namespace std;
void insertAtPosition(int arr[], int &size, int pos, int value) {
// 1,2,3,4,6 pos=3, value=5

for (int i = size; i >= pos; i--)
{     
    arr[i]=arr[i-1]; 
}
arr[pos-1]=value;
size++;
}

int main(){
    int arr[10]={1,2,3,4,6};
    int size=5;
    insertAtPosition(arr, size, 3, 5);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}