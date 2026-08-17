/*leetcode -135 */
agar isko one pass me karenge to correct ans nahi aayega aur left to right greedy approach fail karega.

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<int>L2R(n,1);
        vector<int>R2L(n,1);
        //pehle left neighbours check from left to right.
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1]){
                L2R[i]=max(L2R[i],L2R[i-1]+1);
            }
        }
        //ab right neighbours check karna hai from right to left
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                R2L[i]=max(R2L[i],R2L[i+1]+1);
            }
        }
        int minCandies=0;
        for(int i=0;i<n;i++){
            minCandies=minCandies+max(L2R[i],R2L[i]);
        }
        return minCandies;
        
    }
};