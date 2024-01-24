// Q. clear kth bit of integer n?

// Input: n=8 k=3
// Output: 0
// Explanation: the binary representation of 8 is 1000 . after clearing the 4th bit the number becomes 0.

// Code:-

#include<bits/stdc++.h>>
using namespace std;

int clearKth(int n , int k){
    return (n & (~(1<<(k-1))));
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<clearKth(n,k)<<endl;
    return 0;
}
