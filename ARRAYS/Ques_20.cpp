/* ALTERNATE POSITIVE NEGATIVE */
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        int n=arr.size();
        vector<int>positives;
        vector<int>negatives;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                positives.push_back(arr[i]);
            }
            else{
                negatives.push_back(arr[i]);
            }
        }
        vector<int>result;
        int i=0;
        int j=0;
        int pSize=positives.size();
        int nSize=negatives.size();
        while(i<pSize&&j<nSize){
            result.push_back(positives[i]);
            result.push_back(negatives[j]);
            i++;
            j++;
        }
        while(i<pSize){
            result.push_back(positives[i]);
            i++;
        }
        while(j<nSize){
            result.push_back(negatives[j]);
            j++;
        }
        arr=result;//iss result ko original array me copy kar liye
        
    }
};