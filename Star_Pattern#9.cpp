#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

//  star pattern # 9 -> sample output

//     **********
//     *********
//     ********
//     *******
//     ******
//     *****
//     ****
//     ***
//     **
//     *