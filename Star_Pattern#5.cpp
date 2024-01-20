#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        int k=n;
        for(int col=0;col<n;col++){
            cout<<k<<" ";
            k--;
        }
        cout<<endl;
    }

    return 0;
}

// star pattern # 5 ->  sample output 

    //    5 4 3 2 1 
    //    5 4 3 2 1  
   //     5 4 3 2 1 
  //      5 4 3 2 1 
  //      5 4 3 2 1 
