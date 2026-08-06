/*FIND THE MAXIMUM AND MINIMUM ELEMENT IN AN ARRAY */
class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int n=arr.size();
        vector<int>ans;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]<mini){
                mini=arr[i];
            }
             if(arr[i]>maxi) {
            maxi=arr[i];
            }
            
        }
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
        
    }
};