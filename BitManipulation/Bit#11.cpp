// Q. Swap the two numbers without using temp variable and arithmatic operation ?

// Input: n=8 , k=7
// Output: n=7 , k=8
// Explanation: the binary representation of n=8 is 1000 and k=7 is 0111.
   Do this 3 operations -
    n=n^k;
    k=n^k;
    n=n^k;
   after doing all above operation in same manner the nyou will get expected output.

// code:

#include<bits/stdc++.h>>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    n=n^k;
    k=n^k;
    n=n^k;
    cout<<n<<" "<<k<<endl;
    return 0;
}
