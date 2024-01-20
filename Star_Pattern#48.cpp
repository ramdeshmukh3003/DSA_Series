#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
  
    for(int row=0;row<n;row++){
        for(int col=0;col<3+n-row;col++){
            cout<<"*";
        }
        for(int col=0;col<row+1;col++){
            cout<<row+1<<" ";
            if(col!=row){
                cout<<"* ";
            }
        }
        for(int col=0;col<3+n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}


// star pattern # 48  -> sample output



//      ********* 1 *********
//      ********2 * 2 ********
//      *******3 * 3 * 3 *******
//      ******4 * 4 * 4 * 4 ******
//      *****5 * 5 * 5 * 5 * 5 *****
//      ****6 * 6 * 6 * 6 * 6 * 6 ****