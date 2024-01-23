#include <iostream>
#include<cmath>
#include<limits.h>
using namespace std;
int reverse(int x){
    int ans=0,digit=0;
    bool isNeg=false;
    if(x<=INT_MIN){
        return 0;
    }
    while(x<0){
        isNeg=true;
        x=-x;
    }
    while(x>0){
        if(ans>INT_MAX/10){
            return 0;
        }
        int digit=x%10;
        ans=ans*10+digit;
        x=x/10;
    }
    return isNeg ?  -ans : ans;
}
int main()
{
    
    int n;
    cin>>n;
    cout<<reverse(n)<<endl;
    return 0;
}
