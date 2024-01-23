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