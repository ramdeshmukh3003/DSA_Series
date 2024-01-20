#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int start=n*n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
    }

    return 0;
}

//  star pattern # 7 -> sample output

//       9 8 7 
//       6 5 4 
//       3 2 1 