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