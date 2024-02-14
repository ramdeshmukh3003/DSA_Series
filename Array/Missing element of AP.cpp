#include <bits/stdc++.h>
using namespace std;
int findMissing(int arr[], int n) {
        // code here
    int difference=(arr[n-1]-arr[0])/n;
    for(int i=0;i<n;i++){
        int mid=difference + arr[i];
        if(mid!=arr[i+1]){
            return difference + arr[i];
        }
    }
}
int main() {
    // Write C++ code here
   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout<<findMissing(arr,n)<<endl;
    return 0;
}