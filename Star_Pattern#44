#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        int start=row+1;
        for(int col=0;col<n-row-1;col++){
            if(row==0 || row==n-1 || col==n-row-2 || col==0){
                cout<<start<<" ";
                start++;
            }

            else{
                cout<<"  ";
                start++;
            }
        }
        cout<<endl;
    }

    return 0;
}


// star pattern # 44  -> sample output


//      1 2 3 4 5 
//      2     5 
//      3   5 
//      4 5 
//      5 