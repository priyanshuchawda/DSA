// Example
// Given array:
// arr = [2, 3, 5, 1, 6]

// Prefix Sum array:
// prefixSum = [2, 5, 10, 11, 17]
// Explanation:

// prefixSum[0] = 2
// prefixSum[1] = 2 + 3 = 5
// prefixSum[2] = 2 + 3 + 5 = 10
// prefixSum[3] = 2 + 3 + 5 + 1 = 11
// prefixSum[4] = 2 + 3 + 5 + 1 + 6 = 17

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5] = {2, 3, 5, 1, 6};
    int arry[5];
    arry[0]=arr[0];
    int sum=0;
    int left=0;
    int right=4;
    int i=0;
    for (int i = 1; i < 5; i++)
    {
        arry[i]=arry[i-1]+arr[i];          

    }

    // while(left<=right){
    //     if(left==0){
    //         arry[left]=arr[left];
    //     }
    //     else{
    //         arry[left]=arry[left-1]+arr[left];
    //     }
    //     if(right==4){
    //         arry[right]=arr[right];
    //     }
    //     else{
    //         arry[right]=arry[right+1]+arr[right];
    //     }
    //     left++;
    //     right--;
    // }
   
    for (int i = 0; i < 5; i++)
    {
        cout<<arry[i]<<" ";
    }
    

    
   
    return 0;
}