#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int start=1;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }

    return 0;
}

// star pattern # 6 -> sample output 

    //     1 2 3 4 
    //     5 6 7 8 
    //     9 10 11 12 
    //    13 14 15 16 