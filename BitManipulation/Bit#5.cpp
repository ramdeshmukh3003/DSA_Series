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
