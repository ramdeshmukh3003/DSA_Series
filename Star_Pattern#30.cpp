#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    char ch;
    for(int row=0;row<n;row++){
        ch='A' + row;
        for(int col=0;col<row+1;col++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// star pattern #  30 -> sample output

//      A 
//      B B 
//      C C C 
//      D D D D 
//      E E E E E 