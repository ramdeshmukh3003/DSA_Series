#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int space=0;space<n-1-row;space++){
            cout<<" ";
        }
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

//  star pattern # 12 -> sample output

    //             *
    //           * *
    //         * * *
    //       * * * *
    //     * * * * *
        