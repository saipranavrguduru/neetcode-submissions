class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> visited;
        vector<int> index;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (visited.count(complement)) {
                index.push_back(visited[complement]);
                index.push_back(i);
                return index;  
            }
            visited[nums[i]] = i;
        }
        return index;
    }
};
