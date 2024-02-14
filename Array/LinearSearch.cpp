#include<iostream>
using namespace std;
int search(int arr[], int N, int X)
{
        
     // Your code here
    for(int i=0;i<N;i++){
            
        if(arr[i]==X){
            return i;
        }
            
    }
    return -1;
}

int main(){
    int N,X;
    cin>>N>>X;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<search(arr,N,X)<<endl;
    return 0;
}