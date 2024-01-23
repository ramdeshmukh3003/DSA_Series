#include<bits/stdc++.h>>
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