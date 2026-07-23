/*QUESTIONS: POWER SET -: ALL SUBSEQUENCES OF A STRING */
//TIME COMPLEXITY-:O(N*2^N)
//SPACE COMPLEXITY -: O(N*2^N)
class Solution {
public:
    vector<string> powerSet(string &s) {
        int n = s.size();
        int subsets = 1 << n; // 2^n subsets
        vector<string> ans;

        for (int num = 0; num < subsets; num++) {
            string temp = "";
            for (int i = 0; i < n; i++) {
                if (num & (1 << i)) {
                    temp.push_back(s[i]);
                }
            }
            ans.push_back(temp);
        }

        sort(ans.begin(), ans.end()); // lexicographically sort
        return ans;
    }
};
