
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
  
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        for(int space=0;space<2*n-2*row-2;space++){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        for(int space=0;space<2*row;space++){
            cout<<" ";
        }
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}


// star pattern # 47  -> sample output

// Butterfly Pattern



//      *          *
//      **        **
//      ***      ***
//      ****    ****
//      *****  *****
//      ************
//      ************
//      *****  *****
//      ****    ****
//      ***      ***
//      **        **
//      *          *