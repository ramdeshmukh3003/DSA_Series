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