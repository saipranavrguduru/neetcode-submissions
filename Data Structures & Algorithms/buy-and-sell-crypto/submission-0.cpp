class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int maximum = 0;
        while (right < prices.size()){
            if (prices[left] < prices[right]){
                maximum = max(maximum, prices[right] - prices[left]);
            }
            else{
                left = right;
            }
            right += 1;
        }
        return maximum;
    }
};
