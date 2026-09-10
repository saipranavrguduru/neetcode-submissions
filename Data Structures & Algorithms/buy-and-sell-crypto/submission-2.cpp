class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_i = prices[0];
        int profit = 0;
        for (int i = 0; i < prices.size(); i++){
            profit = max(profit, prices[i] - buy_i);
            buy_i = min(buy_i, prices[i]);
        }
        return profit;
    }
};
