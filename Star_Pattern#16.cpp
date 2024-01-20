#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
           if(col==0 || col==n-1 || row==0 || row==n-1){
               cout<<"* ";
           }
           else{
               cout<<"  ";
           }
        }
        cout<<endl;
    }

    return 0;
}

// star pattern #  16 -> sample output



//     * * * * * * 
//     *         * 
//     *         * 
//     *         * 
//     *         * 
//     * * * * * * 