/* GFG QUESTIONS HAI YEH */

class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
     int n=arr.size();
     int mini=INT_MAX;
     for(int i=0;i<n;i++){
         int sum=0;
         for(int j=i;j<n;j++){
             sum=sum+arr[j];
             if(sum>x){
                 mini=min(mini,j-i+1);
                 break;
             }
         }
     }
     if(mini==INT_MAX){
         return 0;
     }
     else{
         return mini;
     }
    }
}; -> ISKA TIme  COMPLEXITY  bahut hai mera approach me  O(n^2) hai  , space to constant hai o(1);

/* LEETCODE 209 */


