class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //brute force -: hash table 
        unordered_map<int,int>freq;
        for(int arr:nums){
            freq[arr]++;
            //agar kisi bhi element ka freq more than 1 mil jaati hai iska mtlb kya ?
            //isdka mtlb wahi repated element hai so return kar do 
            if(freq[arr]>1){
                return arr;

            }
        }
        //agar koi bhi repeated element nahi mila then 
        return -1;

        
    }
};
//analyse time and space complexity 
// time complexity-: O(n);
//space -: O(n)//yeh to issue hai 