/*QUESTIONS -:ZERO SUM SUBARRAY */
//YAHA unordered_set use isliye kiye kyunki yaha presence check karna tha agar find out karna rehta kitna subarray then map use karte (key-value pair)

class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        unordered_set<int>seenSums;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            if(sum==0)return true;
            if(seenSums.count(sum)>0) return true;
            seenSums.insert(sum);
        }
        return false;
        
    }
};


/* LEETCODE -: 560 VERY HARD FOR ME */
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;              // kitne subarrays ka sum k hai
        int sum = 0;                // cumulative sum
        unordered_map<int,int> freq; // prefix sum ki frequency store karne ke liye

        freq[0] = 1; // important: sum=0 ek baar already aaya hai (empty subarray)

        for(int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];    // cumulative sum add karte jao

            // check karo ki (sum - k) pehle aaya hai kya
            if(freq.count(sum - k) > 0) {
                count = count + freq[sum - k]; // jitni baar aaya hai utni baar subarray milega
            }

            // ab current sum ki frequency badha do
            freq[sum]++;
        }

        return count;
    }
};
 