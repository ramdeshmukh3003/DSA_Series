// Q. count the number of set bits in binary representation of integer n ?

// Input: n=8
// Output: 1
// Explanation: the binary representation of n=8 is 1000, then the no of set bit is only 1.

// code:

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n!=0){
        
        int bit = n & 1;
        if(bit){
            ans++;
        }
        n = n >> 1;
    }
    cout<<ans<<endl;
    return 0;
}
