#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


bool is(){
        string s;
        getline(cin,s);
        
        int left=0;
        int right=s.length()-1;
        while (right>left){
        if (!isalnum(s[left]))
        {
            left++;
        }
        else if (!isalnum(s[right]))
        {
            right--;
        }
        else if (s[left]!=s[right])
        {
            return false;

        }
        else{
        right--;
        left++;
        }

}
return true;}