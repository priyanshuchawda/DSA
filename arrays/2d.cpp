#include<iostream>
using namespace std;

    
void printArray(int arr[][3], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size, 3);
    return 0;
}
    