#include <iostream>
using namespace std;

int main() {
    int rows = 4;

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
             for (int j = 1; j <= 2 * (rows - i); j++) {
            cout << " ";
        }

      
        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        
    
        }
        return 0;
}