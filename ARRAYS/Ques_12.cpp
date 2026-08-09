/* MERGE TWO SORTED ARRAYS WITHOUT USING EXTRA SPACE */
class Solution {
public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size();  // size of first array
        int m = b.size();  // size of second array

        int left = n - 1;  // pointer for last element of a
        int right = 0;     // pointer for first element of b

        // Jab tak dono pointers valid hain
        while (left >= 0 && right < m) {
            // Agar a ka element bada hai b ke element se
            if (a[left] > b[right]) {
                swap(a[left], b[right]);  // swap kar do
                left--;   // a ke pointer ko left move karo
                right++;  // b ke pointer ko right move karo
            } else {
                // Agar a[left] chhota ya equal hai b[right] se,
                // to arrays already sorted hain
                break;
            }
        }

        // Ab dono arrays ko individually sort kar lo
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
};
