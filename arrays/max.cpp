
#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
}
int maxf(int arr[],int size){
    int maxi=INT_MIN;
    int maxi2=INT_MIN;

    for(int i=1;i<size;i++){
        if(arr[i]>maxi){
            maxi2=maxi;
            maxi=arr[i];
        }
    }
    
       return maxi2; 
}

        int main(){
            int arr[]={1,2,3,4,5,6,7,8,9,10};
            int size=sizeof(arr)/sizeof(arr[0]);
            cout<<"Array is: ";
            printarray(arr,size);
            cout<<endl;
            cout<<"Maximum  2 element is: "<<maxf(arr,size);
            return 0;
        }