// Q. Convert Binary to Decimal ?

// Input: 1010
// Output: 10
// Explanation: the binary representation 1010 is representation of integer number 10 .

// Code:-

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0,i=0;
    int bit;
    while(n>0){
        bit=n%10;
        if(bit==1){
            ans=(ans+pow(2,i));
        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
