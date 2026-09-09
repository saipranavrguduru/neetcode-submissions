class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int>times;
        for (int i = 0; i < nums.size(); i++){
            times[nums[i]]++;
        }
        for (auto& it : times){
            if (it.second > 1)
                return true;
        }
        return false;
    }
};
