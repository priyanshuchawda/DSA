// 1 i=0 j=0 
// 01 i=1 j=0 , j=1
// 101 i=2 j=0,1,2
// 0101 ....
// 10101 
#include <iostream>
using namespace std;

int main() {
    int n = 1;  
    
    for (int i = 0; i < 5; i++) {  
        for (int j = 0; j < n; j++) { 
            
            if ((i + j) % 2 == 0)
                cout << "1";
            else
                cout << "0";
        }
        n++;  
        cout << endl; 
    }

    return 0;
}
