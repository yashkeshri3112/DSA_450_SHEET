/* QUESTIONS-13 : KADANES ALGORITHM.*/

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int maxi=arr[0];
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            maxi=max(maxi,sum);
            if(sum<0)
            sum=0;//reset kar do
        }
        return maxi;
        
    }
};