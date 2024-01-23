#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=1;
    while(x<=n){
        n = n ^ x;
        x = x << 1;
    }
    cout<<n<<endl;
    return 0;
}


#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int ans=0,i=0;
    int bit;
    while(n<0){
        n=pow(2,16)+n;
    }
    while(n>0){
        bit=n&1;
        ans=ans+(bit*pow(10,i));
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
