#include <iostream>
using namespace std;

int main()
{
    int n = 14;
    int c=0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
            if (n / i != i)
            {
                c++;
            }
        }
    }
    if (c==2){
        cout<<"PRime";

    }
    else{
        cout<<"composite";
    }
    return 0;
}