//    A
//   ABA
//  ABCBA
// ABCDCBA

#include <iostream>
using namespace std;

int main()
{
    int n = 1;

    char ch;
    for (int i = 0; i < 4; i++)
    {
        ch = 'A';
        for (int j = 4; j >= n; j--)
        {
            cout << " ";
        }
        n++;
        for (int k = 0; k < (2 * i + 1) / 2 + 1; k++)
        {
            cout << ch;
            ch++;
        }
        char temp=ch;
        for (int h = 0; h < (2 * i + 1) / 2; h++)
        {
            cout << char(temp - 2);
            temp--;
        }
        

        cout << endl;
    }

    return 0;
}