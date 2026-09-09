class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool soil = false;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == nums[i+1]){
                soil = true;
            }
        }
        return soil;
    }
};
