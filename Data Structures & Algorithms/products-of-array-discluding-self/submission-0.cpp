class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> products;
        
        for (int i = 0; i < nums.size(); i++){
            int prod = 1;
            for (int k = 0; k < nums.size(); k++){
                if (k != i){
                    prod = nums[k]* prod;
                }
            }
            products.push_back(prod);
        }
        return products;
    }
};
