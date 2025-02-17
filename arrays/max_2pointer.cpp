#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
}

int maxf(int arr[],int size){
    int maxi=INT_MIN;
    int left=0;
    int right=size-1;
    int maxi2=INT_MIN;

    while(left<=right){
        if(arr[left]>maxi){
            maxi2=maxi;
            maxi=arr[left];
        } else if (arr[left] > maxi2 && arr[left] < maxi) {
            maxi2 = arr[left]; // Update second max
        }
        }
        if(arr[right]>maxi){
            maxi2=maxi;
            maxi=arr[right];
        }
        left++;
        right--;

    

    return maxi2;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array is: ";
    printarray(arr,size);
    cout<<endl;
    cout<<"Maximum element is: "<<maxf(arr,size);
    return 0;
}
    // 1 2 3 4 5 7 2 3 1 3 
    // 1<3
    //yes so go to next
    //
        