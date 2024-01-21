#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int cols=0;cols<n;cols++){
            cout<<row+1<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// star pattern # 3 -> sample  output 

    //     1 1 1 1 1 
    //     2 2 2 2 2 
    //     3 3 3 3 3 
    //     4 4 4 4 4 
    //     5 5 5 5 5 
