#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int rows=0;rows<n;rows++){
        for(int space=0;space<rows;space++){
            cout<<" ";
        }
        for(int col=0;col<n-rows;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

//  star pattern # 13 -> sample output



//     ******
//      *****
//       ****
//        ***
//         **
//          *
          
