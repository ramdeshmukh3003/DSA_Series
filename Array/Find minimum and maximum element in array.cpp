#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}



pair<long long, long long> getMinMax(long long a[], int n) {
    int maxi=INT_MIN,mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>maxi){
            maxi=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]<mini){
            mini=a[i];
        }
    }
    pair <long long,long long> sets(mini, maxi) ;
    return sets;
}