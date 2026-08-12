/* common in 3 sorted arrays*/

class Solution {
  public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        int n=a.size();
        int m=b.size();
        int o=c.size();
     int i=0;
     int j=0;
     int k=0;
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     sort(c.begin(),c.end());
     vector<int>ans;
     while(i<n&&j<m&&k<o){
         if(a[i]==b[j]&&b[j]==c[k]){
             //for unique push karne ke liye.
             if(ans.empty()||ans.back()!=a[i]){
                 ans.push_back(a[i]);
             }
             i++;
             j++;
             k++;
         }
         else if(a[i]<b[j]){
             i++;
             
         }
         else if(b[j]<c[k]){
             j++;
            
         }
         
         else{
             k++;
         }
         
     }
     return ans;
        
    }
};