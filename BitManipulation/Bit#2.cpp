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
