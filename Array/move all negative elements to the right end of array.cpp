
#include <bits/stdc++.h>
using namespace std;

void segregateElements(int arr[],int n)
{
        // Your code goes here 
    vector<int> v;
    
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            v.push_back(arr[i]);
        }
    }

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            v.push_back(arr[i]);
        }
    }

    for(int i=0;i<v.size();i++){
        arr[i]=v[i];
    }
        
        
}




int main() {
	// your code goes here

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
		
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
	cout<<endl;
    return 0;
}
