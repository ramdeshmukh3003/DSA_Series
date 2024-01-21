#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int rows=0;rows<n;rows++){
        for(int spaces=0;spaces<n-1-rows;spaces++){
            cout<<" ";
        }
        for(int col=0;col<rows+1;col++){
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
        
