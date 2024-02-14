#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n] , i;
        for(i=0;i<n;i++)
            cin>>a[i];
        rotate(a, n);
        for (i = 0; i < n; i++)
            cout<<a[i]<<" ";
        printf("\n");
    }
        return 0;
}



//User function Template for C++

void rotate(int arr[], int n)
{
   
    int temp=0;
    for(int i=0;i<n-1;i++){
        temp=arr[n-1];
        arr[n-1]=arr[i];
        arr[i]=temp;
    }

}