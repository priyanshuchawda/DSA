#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<map>
#include<set>

using namespace std;

int main(){
    unordered_map<string,int> m;
    m["abc"]=1;
    m["def"]=2;
    m["ghi"]=3;
    
    cout<<m["abc"]<<endl;
    return 0;
}

