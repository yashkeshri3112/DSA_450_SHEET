/*Questions-9: Minimise the maximum difference between heights.*/
class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n=arr.size();
      if(n==1) return 0;
      sort(arr.begin(),arr.end());
      int diff=arr[n-1]-arr[0];
      int mini,maxi;
      for(int i=1;i<n;i++){
          if(arr[i]-k<0) continue;//matlb current iterations skip kar do.
          maxi=max(arr[i-1]+k,arr[n-1]-k);
          mini=min(arr[0]+k,arr[i]-k);
          diff=min(diff,maxi-mini);
          
      }
      return diff;
        
    }
};