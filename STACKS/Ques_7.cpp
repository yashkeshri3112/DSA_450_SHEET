class Solution {
  public:
    string reverse(const string& S) {
        stack<char>s;
     //push all characters in the stack
     for(int i=0;i<S.length();i++){
         char ch=S[i];
         s.push(ch);
     }
     string ans="";
     while(!s.empty()){
         char ch=s.top();
         ans.push_back(ch);
         s.pop();
     }
     return ans;
    }
};