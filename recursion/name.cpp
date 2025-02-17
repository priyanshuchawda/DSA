#include <iostream>
using namespace std;

void name(int c,int n){
    
    if(c>n){
    return;        
    }
    cout<<"NAME"<<endl;
    name(c+1,n);
    
    
}
int main() {
    int m;
    cin>>m;
    name(1,m);
    return 0;
}