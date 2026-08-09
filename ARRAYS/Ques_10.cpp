/* MINIMUM NO OF JUMPS TO REACH END  OF AN ARRAY*/ HARD PROBLEM
class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        int maxi = 0;     // future me kitna aage tak ja sakte hai
        int choice = 0;   // current jump ke end tak ka reach
        int jumps = 0;    // total jumps count karne ke liye 

        for (int i = 0; i < n - 1; i++) {
            maxi = max(maxi, arr[i] + i); // har index pe maximum reach check karo

            // agar current index choice ke equal hai
            // mtlb current jump khatam hogya hai ab next jump lena padega
            if (i == choice) {
                choice = maxi;  // next jump ke liye new reach set karna hai
                jumps++;
            }
        }

        if (choice >= n - 1) 
            return jumps;
        return -1;
    }
};
