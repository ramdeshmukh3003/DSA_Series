// Q. perform the operation 1s compliment of a integer n ?

// Input: n=8
// Output: 7
// Explanation: the binary representation of 8 is 1000 then the compliment of number 8 is 7(the binary representation of 7 is 0111 that refers to compliment of 8).

// Code:-

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=1;
    while(x<=n){
        n = n ^ x;
        x = x << 1;
    }
    cout<<n<<endl;
    return 0;
}
