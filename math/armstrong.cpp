#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n=1634;
    int original=n;
    int temp=0;
    int c=0;
    int sum=0;

    while (n!=0)
    {
        temp=n%10;
        c++;
        n=n/10;
    }
    n=original;
    temp=0;
    while (n!=0)
    {
        temp=n%10;
        sum=sum+pow(temp,c);
        n=n/10;
    }
    if (sum==original){
        cout<<"Armstrong";

    }
    else{
        cout<<"No";
    }
    return 0;
}