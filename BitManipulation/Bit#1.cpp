

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n!=0){
        
        int bit = n & 1;
        if(bit){
            ans++;
        }
        n = n >> 1;
    }
    cout<<ans<<endl;
    return 0;
}
