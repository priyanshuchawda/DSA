#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>>& queries){
    int n = arr.size();
    vector<int> v(n);  
    v[0]=arr[0];
    int sum=0;

    for (int i = 1; i < n; i++)
    {
        v[i]=v[i-1]+arr[i];
    }
    vector<int> result;
    int q=queries.size();
    for (int i = 0; i < q; i++)
    {
        /* code */
        int a=queries[i][0];
        int b=queries[i][1];
        if (a!=0)
        {
            result.push_back(v[b]-v[a-1]);
        }
        else{
            result.push_back(v[b]);
        }
       
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }

    return result;
    


// arr = [2, 3, 5, 1, 6]
// queries = [[0, 2], [1, 3], [2, 4]]
// 
// [10, 9, 12]
// Explanation
// Query [0,2] → arr[0] + arr[1] + arr[2] = 2 + 3 + 5 = 10
// Query [1,3] → arr[1] + arr[2] + arr[3] = 3 + 5 + 1 = 9
// Query [2,4] → arr[2] + arr[3] + arr[4] = 5 + 1 + 6 = 12

   


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> arr = {2, 3, 5, 1, 6};
    vector<vector<int>> queries = {{0, 2}, {1, 3}, {2, 4}};
    vector<int> result = rangeSumQueries(arr, queries);
    
    
    // Your DSA code goes here
    
    
    return 0;
}