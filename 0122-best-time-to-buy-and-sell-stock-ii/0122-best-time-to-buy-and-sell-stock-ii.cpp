class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int i = 0;

        while(i < prices.size() - 1)
        {
            if(prices[i+1] > prices[i]) {
                maxProfit += prices[i+1] - prices[i];
            }
            i++;
        }
        return maxProfit;
    }
};