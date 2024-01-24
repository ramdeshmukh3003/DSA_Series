// Q. check the 32 bit integer is power of two?

// Input: n=8
// Output: yes
// Explanation: the integer is 8 it is 2 raised to power of 3 that refers to the 8 so the answer is yes.

// Code:-

#include <iostream>
#include<cmath>
#include<limits.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x && !( x&(x-1))){
      cout<<"Power of 2";
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
