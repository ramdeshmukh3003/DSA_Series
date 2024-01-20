#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int c=1;
    for(int row=0;row<n;row++){
        for(int space=0;space<n-row-1;space++){
            cout<<" ";
        }
        int start=row+1;
        for(int col=0;col<row+1;col++){
           cout<<start<<" ";
           start++;
        }
        start=2*row;
        for(int col=0;col<row;col++){
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
    }

    return 0;
}


// star pattern # 50  -> sample output


//           1 
//         2 3 2 
//        3 4 5 4 3 
//       4 5 6 7 6 5 4 
//      5 6 7 8 9 8 7 6 5 