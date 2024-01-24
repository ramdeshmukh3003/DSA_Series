// Q. finding ith bit in the binary representation of n?

// Input: n=15 i=3
// Output: 1
// Explanation: in the binary representation of 15 then index 3 bit is 1.

// Code:-

#include <iostream>
using namespace std;

int main()
{
    int x,i;
    cin>>x>>i;
    int mask = (x & (1<<(i-1)));
    int ans = mask >> (i-1);
    cout<<ans<<endl;
    return 0;
}
