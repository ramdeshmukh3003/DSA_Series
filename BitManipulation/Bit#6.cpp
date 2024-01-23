#include <iostream>
using namespace std;

int main()
{
    int x,i;
    cin>>x>>i;
    int mask = (x & (1<<(i-1)));
    int ans = mask << (i-1);
    cout<<ans<<endl;
    return 0;
}
