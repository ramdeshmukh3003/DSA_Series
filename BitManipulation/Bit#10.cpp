// Q. find the number of bits to convert n to k ?

// Input: n=8 , k=7
// Output: 4
// Explanation: the binary representation of n=8 is 1000 and k=7 is 0111, then the no of set bit is the answer i.e. 4.

// code:

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int ans=n^k;
    int ans3=0;
    while(ans!=0){
        int ans2=ans&1;
        if(ans2){
            ans3++;
        }
        ans=ans>>1;
    }
    cout<<ans3<<endl;
    return 0;
}
