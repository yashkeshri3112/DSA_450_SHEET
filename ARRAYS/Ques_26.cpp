/* QUESTIONS -: ARRAY SUBSET -: ISME BAS PRESENCE HI CHECK KARNA HAI */
//SYNATX RAT LO ISKA 
class Solution {
public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Step 1: Put all elements of 'a' in a set
        unordered_set<int> s;
        for(int i = 0; i < a.size(); i++) {
            s.insert(a[i]);   // insert each element of a into set
        }

        // Step 2: Check each element of 'b'
        for(int i = 0; i < b.size(); i++) {
            int element = b[i];   // take one element from b

            // check if element is present in set
            if(s.find(element) == s.end()) {
                // element not found in 'a'
                return false;
            }
        }

        // Step 3: All elements found
        return true;
    }
};


//EXTENDED VERSION OF THIS QUESTIONS -: JISME HAME FREQUENCY DEKHKAR KARNA HAI.
class Solution {
public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Step 1: Count frequency of elements in 'a'
        unordered_map<int,int> freqA;
        for(int i=0; i<a.size(); i++) {
            freqA[a[i]]++;
        }

        // Step 2: Check frequency of elements in 'b'
        for(int i=0; i<b.size(); i++) {
            int element = b[i];
            if(freqA[element] > 0) {
                freqA[element]--;  // use one occurrence
            } else {
                // element not available enough times
                return false;
            }
        }

        // Step 3: All elements matched
        return true;
    }
};
