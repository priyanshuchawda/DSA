// #include <iostream>
// using namespace std;

// int main()
// {
//     int n1 = 9;
//     int n2 = 18;
//     int gcd = 0;

//     for (int i = 1; i <= n2; i++)
//     {
//         if (n1 % i == 0 && n2 % i == 0)

//         {
//             gcd = i;
//         }
//     }
//     cout << gcd;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int a=5;
    int b=29;
    int gcd=0;
    int lcm=0;
     
        
        int A = a, B = b;  
        
        while (b != 0) {
            a = a % b;
            swap(a, b);
        }
        
        gcd = a;  
        lcm = (A * B) / gcd;

        cout<<gcd<<endl<<lcm<<endl;
    
    return 0;
}