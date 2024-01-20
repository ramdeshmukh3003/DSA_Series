#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int row=0;row<n;row++){
        char ch='A';
        for(int col=0;col<row;col++){
           cout<<ch<<" ";
           ch++;
        }
        for(int col=ch;col>='A';col--){
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }

    return 0;
}


// star pattern # 41  -> sample output


//      A 
//      A B A 
//      A B C B A 
//      A B C D C B A 
//      A B C D E D C B A 
//      A B C D E F E D C B A 