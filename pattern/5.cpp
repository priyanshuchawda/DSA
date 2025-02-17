#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    
    for (int i = 0; i < 5; i++)
    {
            
        for (int j = 0; j < n; j++)
        {

            cout << "*";
            
        }
        
        n--;
        cout << endl;
    }
    return 0;
}