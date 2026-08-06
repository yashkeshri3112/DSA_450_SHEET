/* given an array which consistss of only 0,1and 2 sort the array without using any sorting algorithm.*/
class Solution {
  public:
    void sort012(vector<int>& arr) {
      vector<int>ans;
      int n=arr.size();
      int low=0;
      int mid=0;//yeh current element checka karega.
      int high=n-1;
      while(mid<=high){
          if(arr[mid]==0){
              swap(arr[low],arr[mid]);
              ans.push_back(mid);
              low++;
              mid++;
          }
          else if(arr[mid]==1){
              ans.push_back(mid);
              mid++;
          }
          else{
              //agar value 2 hoga then
              swap(arr[high],arr[mid]);
              ans.push_back(mid);
              high--;
          }
      }
        
    }
};