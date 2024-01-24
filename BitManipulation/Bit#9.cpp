// Q. Toggle kth bit of integer n?

// Input: n=8 k=2
// Output: 12
// Explanation: the binary representation of 8 is 1000 . after toggling the 3rd bit the number becomes 12.

// Code:-


#include<bits/stdc++.h>>
using namespace std;

int ToggleKth(int n , int k){
    return (n ^ (1 << (k-1)));
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<ToggleKth(n,k)<<endl;
    return 0;
}
