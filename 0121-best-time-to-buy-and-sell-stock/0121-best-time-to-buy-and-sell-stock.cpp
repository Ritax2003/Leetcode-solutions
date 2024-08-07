class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minpriceindx = 0;
        int n = prices.size();
        int profit = 0;
        for(int i =0;i<n;i++){
            if(prices[i] < prices[minpriceindx]) minpriceindx = i;
            else{
                profit = max(profit, prices[i]-prices[minpriceindx]);
        }
      }
        
        return profit;
    }
};