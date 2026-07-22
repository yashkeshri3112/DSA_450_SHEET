/* COPY SET BITS IN A RANGE */ 
//NAIVE APPROACH  BIT BY BIT CHECK ISME HAR BIT KE LIYE MASK BANANA HAI -: TIME COMPEXITY -:  O(L-R+1)  ,   SPACE -:O(1)
class Solution {
  public:
    int setSetBit(int x, int y, int l, int r) {
        for(int i=l;i<=r;i++){
            int mask=1<<(i-1);//masking kar do for ith position 
            if(y&mask){//check karo y me bit set hai to
            x=x|mask;//to x me bhi set kar do
                
            }
        }
        return x ;
        
    }
};

//OPTIMISED APPROACH EK HI BAAR ME PURA MASK NIKAAL LO RANGE KA PHIR CHECK KARKE COPY KARTE JAO
//TIME COMPLEXITY-:O(1)
//SPACE COMPLEXITY-: O(1)

#include <bits/stdc++.h>
using namespace std;

int copySetBitsFast(int x, int y, int l, int r) {
    // Step 1: Range length nikal lo
    int maskLength = r - l + 1;  
    
    // Step 2: Ek mask banao jisme sirf [l, r] range ke bits 1 hon
    // (1 << maskLength) - 1 → itna length ka all-ones banata hai
    // fir usko (l-1) shift karte hain taaki range align ho jaye
    int mask = ((1 << maskLength) - 1) << (l - 1);  
    
    // Step 3: y ke andar se sirf wahi bits nikal lo jo mask ke andar hain
    int bitsToCopy = y & mask;  
    
    // Step 4: x ke andar un bits ko OR karke copy kar do
    return x | bitsToCopy;  
}

int main() {
    int x = 10, y = 13, l = 2, r = 3;
    cout << copySetBitsFast(x, y, l, r); // Output: 14
}
