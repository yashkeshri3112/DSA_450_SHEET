/* LEETCODE -:121 BEST TIME TO BUY AND SELL STOCK */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>ans;
        int n=prices.size();
            int maxProfit=0;
            int minPrice=prices[0];
            for(int i=1;i<n;i++){
                    int profit =prices[i]-minPrice;
                    maxProfit=max(maxProfit,profit);
                    minPrice=min(minPrice,prices[i]);
                
                 }
            return maxProfit;     
    }
};