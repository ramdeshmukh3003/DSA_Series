// Q. finding the index of most significant set bit of integer n ?

// Input: n=8
// Output: 3
// Explanation: the binary representation of 8 is 1000 then index of most significant set bit is 3(4th bit).

// Code:-

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    
    while(n!=0){
        n=n/2;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
