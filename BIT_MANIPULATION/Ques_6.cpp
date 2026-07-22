/* FIND POSITION OF THE ONLY SET BIT */
/*MY APPROACH */ TIME COMPLEXITY-:O(LOGN) , SPACE -: O(LOGN)
class Solution {
  public:
    int findPosition(int n) {
        int count=0;
        vector<int>ans;
        while(n>0){
            int lastbit=n%2;
            if(lastbit==1){
                count++;
            }
            ans.push_back(lastbit);
            n=n/2;
        }
        if(count==0||count>1){
            return -1;
        }
        //vector me lsb se hi store hai [0,1] yaani 0->lsb 1 ->msb
        //and binary position hamesha lsb se count hota hai and (1-based hota hai very imp)
      //array 0 based indexing hai aur position of binary 1 based indexing hoti hai
        for(int i=0;i<=ans.size()-1;i++){
            if(ans[i]==1){
                return i+1;
            }
        }
        
        
        
    }
};

/* BIT MANIPULATION APPROACH */ TIME COMPLEXITY-: O(LOGN), SPACE COMPLEXITY-: O(1)
class Solution {
public:
    int findPosition(int n) {
        // Agar n <= 0 hai ya power of two nahi hai
        if(n <= 0 || (n & (n-1)) != 0) {
            return -1;
        }
        
        int pos = 1; // position starts from 1 (LSB = position 1)
        while(n > 1) {
            n = n >> 1; // right shift
            pos++;
        }
        return pos;
    }
};
