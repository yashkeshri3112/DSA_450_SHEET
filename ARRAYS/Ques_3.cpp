/* find the kth maximum and minimum element of an arrays*/
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        for(int i=0;i<k;i++){
            return arr[k-1];        }
        
    }
};