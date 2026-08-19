/* Three way partioning */
class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
     int n=arr.size();
     int start=0;//left pointer <a 
     int curr=0;//current index 
     int end=arr.size()-1;//right pointer yaha sab >b.
     while(curr<=end){
         if(arr[curr]<a){
             swap(arr[curr],arr[start]);
             start++;
             curr++;
         }
         else if(arr[curr]>=a&&arr[curr]<=b){
             curr++;
         }
         else{
             swap(arr[curr],arr[end]);
             end--;
         }
     }
     
        
    }
}; 

similar to the questions dutch national flag algorithm sort 0,1,2 without using any sorting algorithm.