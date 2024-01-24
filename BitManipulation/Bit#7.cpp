// Q. Set kth bit of integer n?

// Input: n=8 k=2
// Output: 12
// Explanation: the binary representation of 8 is 1000 then index 2 we want to set then after setting bit number becomes 12.

// Code:-

#include<iostream>
using namespace std;

int setkTH(int n , int k){
    return (n | (1<<(k-1)));
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<setkTH(n,k)<<endl;
    return 0;
}
