#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int space=0;space<row;space++){
            cout<<" ";
        }
        for(int col=0;col<2*n-2*row-1;col++){
            if(row==0 || col==2*n-2*row-2 || col==0){
                cout<<"*"; 
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

// star pattern # 36  -> sample output

//      ***********
//       *       *
//        *     *
//         *   *
//          * *
//           *