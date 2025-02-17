#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    int g = 4;
    for (int i = 0; i < 4; i++)
    {

        for (int l = 0; l < g; l++)
        {
            cout << " ";
        }

        for (int j = 0; j < n; j++)
        {

            cout << "*";
        }
        n = n + 2;
        cout << endl;
        g--;
    }
    return 0;
}