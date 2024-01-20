#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        int start=row+1;
        for(int col=0;col<row+1;col++){
           cout<<start<<" ";
           start--;
        }
        cout<<endl;
    }

    return 0;
}

// star pattern #  21 -> sample output


//      1 
//      2 1 
//      3 2 1 
//      4 3 2 1 
//      5 4 3 2 1 