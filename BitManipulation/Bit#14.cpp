// Q. convert decimal to binary (both for positive and negative integer) ?

// Input: n=8
// Output: 1000
// Explaination: the binary representation of 8 is 1000 . 


// Input: n= -8
// Output: 7
// Explaination: the binary representation of -8 is 0111 that refers to integer 7 . 

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int ans=0,i=0;
    int bit;
    while(n<0){
        n=pow(2,16)+n;
    }
    while(n>0){
        bit=n&1;
        ans=ans+(bit*pow(10,i));
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
