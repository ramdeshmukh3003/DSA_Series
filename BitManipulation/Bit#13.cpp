// Q. Check the integer n has bits in an alternate pattern  ?

// Input: n=10
// Output: Yes
// Explanation: the binary representation of 10 is 1010 then the bits are in alternate pattern so the answer is yes.

// Code:-

#include <bits/stdc++.h>  
using namespace std; 

bool allBitsAreSet(unsigned int n) 
{ 
    
    if (((n + 1) & n) == 0) 
        return true; 
    
    return false; 
} 

bool bitsAreInAltOrder(unsigned int n) 
{ 
    unsigned int num = n ^ (n >> 1); 
    return allBitsAreSet(num); 
} 
  
int main() 
{ 
    unsigned int n = 10; 
    if (bitsAreInAltOrder(n)) 
        cout << "Yes"; 
    else
        cout << "No"; 
    return 0; 
} 
