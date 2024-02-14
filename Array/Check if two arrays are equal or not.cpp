#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<ll> A, vector<ll> B, int N) {
        //code here;
    map<int , int> mp1,mp2;
    for(int i=0;i<N;i++){
        mp1[A[i]]++;
        mp2[B[i]]++;
    }
    if(mp1 != mp2){
        return 0;
    }
    return 1;
}
int main() {
    // Write C++ code here
   
    int n;
    cin>>n;

    vector<ll> arr(n,0),brr(n,0);
    
    for(ll i=0;i<n;i++){
        cin >> arr[i];
    }
    for(ll i=0;i<n;i++){
        cin >> brr[i];
    }
    cout<<check(arr,brr,n)<<endl;
    return 0;
}