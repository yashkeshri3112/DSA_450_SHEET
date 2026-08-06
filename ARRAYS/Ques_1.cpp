/* REVERSE THE ARRAY */
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int low=0;
        int high=arr.size()-1;
        while(low<high){
            int temp=arr[low];
            arr[low]=arr[high];
            arr[high]=temp;
            low++;
            high--;
        }
    
    
        
    }
};