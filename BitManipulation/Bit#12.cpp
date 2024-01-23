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
    int mask=(1<<(ans-1));
    cout<<mask<<endl;
    return 0;
}