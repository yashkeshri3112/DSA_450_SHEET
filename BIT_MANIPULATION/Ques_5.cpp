/* PROGRAM TO FIND WHETHER A NO IS POWER OF TWO */
/* MY APPROACH */ TIME COMPLEXITY-: O(1) just bcz input size n ke saath grow nahi kr raha hai ,pow(i)-> constant time leta hai.
                 SPACE COMPLEXITY-: O(1) only ans naam ka variable le rhe hai 
class Solution {
  public:
    bool isPowerofTwo(int n) {
        for(int i=0;i<=31;i++){
            long long ans=pow(2,i);
            if(n==ans){
            return true;
            }
            
        
            
        }
        return false;
        
    }
};

/* SECOND APPROACH -: USING BIT MANIPULATION */
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;   // negative or zero not allowed
        return (n & (n - 1)) == 0;
    }
};
//TIME COMPLEXITY-: no loop, no pow()->  so O(1)
//SPACE COMPLEXITY-: 0(1)