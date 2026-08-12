/* Two sum pairs with 0 sum */
class Solution {
public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<vector<int>> result;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == 0) {
                    // agar result empty hai ya last pair different hai
                    if (result.empty() || result.back() != vector<int>{arr[i], arr[j]}) {
                        result.push_back({arr[i], arr[j]});
                    }
                }
            }
        }
        return result;
    }
};

/*
NOTE -: YEH TLE maar dega , aur ek concept acha wala yeh ki yeh sirf consecutive duplicates hatata hai agar array me scattered duplicates ho jaise {-2,2} 
pehle aur baad me phir se dobara to uss case me ans galat de dega 
uske liye hame global unique pairs ke liye set ka use karna hoga. */


class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int left=0,right=arr.size()-1;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==0){
                ans.push_back({arr[left],arr[right]});
                left++;
                right--;
                //skip duplicatres hmesha pair store karne ke baad lagana hai
                while(left<right&&arr[left]==arr[left-1])left++;
                while(left < right && arr[right] == arr[right+1]) right--;
                
                
            }
            else if(sum<0){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
        
    }
};