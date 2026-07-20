/* FIND THE TWO NON-REPEATING ELEMENT IN AN ARRAY OF REPEATING ELEMENTS*/
/*MY Approach* -> Time complexity -: O(NLOGN) , Space complexity -> O(1)
class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
        vector<int> ans;
    sort(arr.begin(), arr.end());
    int n=arr.size();

for(int i=0; i<n; ){
    // check duplicate
    if(i < n-1 && arr[i] == arr[i+1]){
        // skip dono duplicates
        i=i+2;
    } else {
        // unique element mila
        ans.push_back(arr[i]);
        i++;
    }
}
return ans;

    }
};

/* SECOND APPROACH TIME -> O(N), SPACE ->O(1)  */
vector<int>findUniqueNumbers(vector<int>&arr){
    int xorAll=0;
    //step-1: sab elements ko XOR karna (isse duplicates cancel ho jaate hai)
    for(int i=0;i<arr.size();i++){
        xorAll=xorAll^arr[i];//har element ka xor kar rhe hai
    }
    //step-2:rightmost set bit nikalna
    int rightbit=xorAll&(~(xorAll-1));
    //step-3:do groups banao based on rightbit
    int firstUnique=0;
    int secondUnique=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]&rightbit){
            //agar rightbit set hau-> group A 
            firstunique=firstunique^arr[i];
        }
        else{
           // agar rightbit unset hai->group B
           secondunique=secondunique^arr[i];
        }
    }
    //step-4: dono unqiue numbers ko vector me daal do
    vector<int>ans;
    ans.push_back(firstunique);
    ans.push_back(secondunique);
    //optional : sort kar lene ke liye taaki chota pehle aaye
    sort(ans.begin(),ans.end());
    return ans;
}

