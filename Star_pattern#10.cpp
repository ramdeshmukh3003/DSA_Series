#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
           if(row==0 || row==1 || row==n-1 || col==0 || row==col){
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

//  star pattern # 10 -> sample output

//     * 
//     * * 
//     *   * 
//     *     * 
//     *       * 
//     * * * * * * 
