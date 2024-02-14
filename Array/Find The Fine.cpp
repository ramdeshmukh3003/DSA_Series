
#include <bits/stdc++.h>
using namespace std;


long long int totalFine(int n, int date, int car[], int fine[])
{
    long long int sum=0;
    if(date%2==0){
           for(long long int i=0;i<n;i++){
                if(car[i]%2!=0){
                    sum+=fine[i];
                }
           }
        }
    else{
        for(long long int i=0;i<n;i++){
            if(car[i]%2==0){
                    sum+=fine[i];
            }
        }
    }
    return sum;
}

int main() {
    int n, i, date;
    cin >> n >> date;
    int car[n], fine[n];
        
    for (i = 0; i < n; i++){
        cin >> car[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> fine[i];
    }
    cout<<totalFine(n,date,car,fine)<<endl;
    return 0;
}
