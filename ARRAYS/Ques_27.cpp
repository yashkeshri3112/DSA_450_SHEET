/* triplet sum*/
class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
      int n=arr.size();
      sort(arr.begin(),arr.end());
      for(int i=0;i<n;i++){
          int left=i+1;//second element 
          int right=n-1;//third element
          while(left<right){
              int sum=arr[i]+arr[left]+arr[right];
              if(sum==target)return true;
              if(sum<target)left++;
              else right--;
          }
          
      }
      return false;
        
    }
};