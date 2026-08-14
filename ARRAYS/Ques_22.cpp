//QUESTIONS-: FACTORIALS OF LARGE NUMBERS 
/* MY APPROACH FOR THIS QUESTIONS BUT TLE MAAR RAHA HAI*/
class Solution {
  public:
    vector<int> factorial(int n) {
        int ans=1;
        for(int i=n;i>=1;i--){
            ans=ans*i;
        }
        vector<int>result;
        while(ans>0){
            int digit=ans%10;
            result.push_back(digit);
            ans=ans/10;
            
        }
        int left=0;
        int right=result.size()-1;
        while(left<right){
            int temp=result[left];
            result[left]=result[right];
            result[right]=temp;
            left++;
            right--;
        }
        return result;
        
        
        
    }
};

/* OPTIMISED APPROACH */
class Solution {
public:
    vector<int> factorial(int n) {
        // result vector me initially 1 store karenge
        vector<int> result;
        result.push_back(1);

        // har number 2 se n tak multiply karte jayenge
        for (int x = 2; x <= n; x++) {
            int carry = 0;

            // har digit ko multiply karo
            for (int i = 0; i < result.size(); i++) {
                int mul = result[i] * x;     // digit * x
                mul = mul + carry;           // carry add karo
                result[i] = mul % 10;        // naya digit store karo
                carry = mul / 10;            // carry update karo
            }

            // agar carry bacha hai toh uske digits vector me daalo
            while (carry > 0) {
                int digit = carry % 10;      // carry ka last digit
                result.push_back(digit);     // vector me add karo
                carry = carry / 10;          // carry ko chhota karo
            }
        }

        // abhi digits ulte order me hain, reverse karna hoga
        reverse(result.begin(), result.end());
        return result;
    }
};
