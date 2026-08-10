/* Leetcode 56 MERGE INTERVALS*/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
        for(int i=0;i<intervals.size();i++){
            //agar result empty hai ya overlap nahi hai to yeh karna hai
            if(result.empty()||result.back()[1]<intervals[i][0]){
                result.push_back(intervals[i]);//directly add karo
            }
            else{
                //agar overlap hai then merge karna hai 
                result.back()[1]=max(result.back()[1],intervals[i][1]);
            }
            
            }
            return result;

        

        
    }
};