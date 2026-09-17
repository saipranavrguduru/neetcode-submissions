class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0;
        int minp = prices[0];
        for (int&sell : prices){
            maxp = max(maxp, sell - minp);
            minp = min(minp, sell);
        }
        return maxp;
    }
};
