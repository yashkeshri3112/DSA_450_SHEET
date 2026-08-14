/* LONGEST CONSECUTIVE SUBSEQUENCE */
class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int maxLength=1,length=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]+1){
                length++;
                maxLength=max(maxLength,length);
                
            }
            else if(arr[i]==arr[i-1]){
                continue;
            }
            else{
                length=1;
            }
        }
        return maxLength;
        
        
    }
};