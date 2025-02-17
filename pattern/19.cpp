#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    int n = 5;
    int h = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        int temp = n;
        n--;
        for (int k = 0; k < (h - 1) * 2; k++)
        {
            cout << " ";
        }
        h++;
        for (int k = 0; k < temp; k++)
        {
            cout << "*";
        }

        cout << endl;
    }

    int rowss = 5;
    int nn = 1;
    int hh = 5;
    for (int ii = 0; ii < rowss; ii++)
    {
        for (int jj = 0; jj < nn; jj++)
        {
            cout << "*";
        }
        int tempp = nn;
        nn++;
        for (int kk = 0; kk < (hh - 1) * 2; kk++)
        {
            cout << " ";
        }
        hh--;
        for (int kk = 0; kk < tempp; kk++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}