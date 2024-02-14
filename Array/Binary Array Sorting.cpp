#include <bits/stdc++.h>
using namespace std;



void binSort(int A[], int N)
{
       //Your code here
    int m=0,n=N-1;
    while(m<=n){
        if(A[m]==0){
            m++;
        }
        else if(A[m]==1){
            swap(A[m],A[n]);
            n--;
        }
    }
       
}


int main() {
	
	
	int N;
	cin>>N; //Input size of array N
	int A[N]; 
	    
	for(int i = 0; i  < N; i++)
	    cin>>A[i];
    
    binSort(A,N);
    for(int i = 0; i  < N; i++)
	    cout<<A[i]<<" ";

	return 0;
}

