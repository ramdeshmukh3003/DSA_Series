// Q. Reverse a Integer with range (INT_MAX , INT_MIN) ?

// Input: n= -123
// Output: -321
// Explanation: the integer is -123 and the reverse of this number is also in this format with negative number .

// Code:-

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
