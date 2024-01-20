#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int c=1;
    for(int row=0;row<n;row++){
        int cond = row<=n/2 ? 2*row :2*(n-row-1);
        for(int col=0;col<=cond;col++){
           if(col<=cond/2){
               cout<<col+1<<" ";
           }
           else{
               cout<<cond-col+1<<" ";
           }
        }
        cout<<endl;
    }

    return 0;
}


// star pattern # 49  -> sample output



//      1 
//      1 2 1 
//      1 2 3 2 1 
//      1 2 3 4 3 2 1 
//      1 2 1 
//      1 