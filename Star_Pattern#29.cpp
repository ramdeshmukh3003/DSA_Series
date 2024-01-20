#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    char ch='A';
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<ch<<" ";
            ch=ch+1;
        }
        cout<<endl;
    }

    return 0;
}

// star pattern #  29 -> sample output

//      A 
//      B C 
//      D E F 
//      G H I J 
//      K L M N O 