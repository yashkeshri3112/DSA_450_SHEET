//QUESTIONS -: CHECKING ALL THE ELEMENTS IN THE ARRAY IS PALINROM HAI KI NAHI.
bool isPalinArray(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        if(!isPalindrome(arr[i])){
            return false;

        }
       return true;

    }
};
bool isPalindrom(int a){
    string s=to_string(a);
    int start=0;
    int end=s.size()-1;
    while(start<end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
