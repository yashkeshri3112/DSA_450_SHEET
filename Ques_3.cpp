/* QUESTIONS-: COUNT NUMBER OF BITS TO BE FLIPPED TO CONVERT A TO B */
/* MY APPROACH  Time complexity-: O(N),O(N) WHERE  n=max(loga,logb) */
class Solution {
  public:
    int countBitsFlip(int a, int b) {
        //STEP-1: A ko binary me convert karna hai
     vector<int>A;
     while(a>0){
         int lastbit=a%2;//isse last bit niklega.
         A.push_back(lastbit);//vector me daalna hai
         a=a/2;//number ko chota karna hai.
     }
     //Step-2: b ko convert karke vectot me daalna hai
     vector<int>B;
     while(b>0){
         int lastbit=b%2;//isse last bit niklega.
         B.push_back(lastbit);
         b=b/2;
     }
     
     //length align karna hoga (agar ek vector hai to usme 0 add karna padega)
     int n=max(A.size(),B.size());
     while(A.size()<n)A.push_back(0);
     while(B.size()<n)B.push_back(0);
     
     //Step-4 : Compare bits and count difference.
     //
     int count=0;

     for(int i=0;i<n;i++){
             if(A[i]!=B[i]){
                 count++;
                 
             }
             
             }
         
         return count;
     }
     
        
    
};

#but yeh wala questions ko aise solve nahi karna hai , use BIT MANIPULATION TECHNIQUE TO SOLVE EFFICIENTLY.

class Solution {
  public:
    int countBitsFlip(int a, int b) {
        // Step-1: XOR of a and b
        int x = a ^ b; // different bits = 1, same bit pe =0 dega 
        //to ab bas different bit(yaani set bit) count karna hai.

        // Step-2: Count set bits in x
        int count = 0;
        while(x > 0) {
            // remove last set bit (Brian Kernighan’s algo) pehle wala algorithm lagao
            x = x & (x - 1); 
            count++;
        }
        return count;
    }
};


