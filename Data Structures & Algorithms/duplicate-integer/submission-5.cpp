class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int>dup;
        for (int i = 0; i < nums.size(); i++){
            dup[nums[i]]++;
        }
        for (auto pair : dup){
            if (pair.second > 1){
                return true;
            }
        }
        return false;
    }
};