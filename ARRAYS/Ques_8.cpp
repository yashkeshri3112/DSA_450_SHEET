/* KADANES ALGORITHM -: MAXIMUM CONTINGOUS SUB-ARRAY*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0;
        int maxSum=nums[0];
        for(int i=0;i<nums.size();i++){
            currSum=currSum+nums[i];
            maxSum=max(maxSum,currSum);
            if(currSum<0)//isko kyu lena hai reset kr dete hai
           currSum=0;
        }
        return maxSum;
        
    }
};