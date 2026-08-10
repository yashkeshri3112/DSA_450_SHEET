/* VERY IMPORTANT AND HARD LEVEL FAANG QUESTIONS -: NEXT PERMUTATION */
/* APPROACH-: BETTER APPROACH */
USING STL LIBRARY 
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // STL function does all the work
        next_permutation(nums.begin(), nums.end());
    }
};

//OPTIMAL APPROACH 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        // STEP 1: Find "gola index" (pivot point)
        // Matlab: pehla aisa index i jaha nums[i] < nums[i+1] (from right side)
        int gola_index = -1;
        for (int i = n - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                gola_index = i - 1; // pivot mil gaya
                break;
            }
        }

        // STEP 2: Agar pivot mila hai toh uske right side me
        // ek bada element dhundho jo nums[gola_index] se bada ho
        if (gola_index != -1) {
            int swap_index = gola_index;
            for (int j = n - 1; j > gola_index; j--) {
                if (nums[j] > nums[gola_index]) {
                    swap_index = j; // ye element swap hoga
                    break;
                }
            }
            // STEP 3: Swap pivot aur usse bada element
            swap(nums[gola_index], nums[swap_index]);
        }

        // STEP 4: Reverse pivot ke right side ka part
        // taaki smallest order ban jaye
        reverse(nums.begin() + gola_index + 1, nums.end());
    }
};
