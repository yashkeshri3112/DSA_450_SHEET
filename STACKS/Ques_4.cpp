class Solution {
    public:
    void solve(stack<int>&s,int count,int n){
        //base case 
        if(count==n/2){
            s.pop();
            return;
        }
        int num=s.top();
        s.pop();
        
        //recursive call
        solve(s,count+1,n);
        //yeh backtrack karta hai
        s.push(num);
    }
    
    
    
    
    
  public:
    void deleteMid(stack<int>& s) {
        int count=0;
        int n=s.size();
        solve(s,count,n);
        
    }
};