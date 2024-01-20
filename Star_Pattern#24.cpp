#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        int start=1;
        for(int space=0;space<(n-row-1);space++){
            cout<<" ";
        }
        for(int col=0;col<row;col++){
           cout<<start<<" ";
           start++;
        }
        for(int col=start;col>=1;col--){
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
    }

    return 0;
}

// star pattern #  24 -> sample output


//            1 
//          1 2 1 
//         1 2 3 2 1 
//        1 2 3 4 3 2 1 
//       1 2 3 4 5 4 3 2 1 
//      1 2 3 4 5 6 5 4 3 2 1 


