class Solution {
public:
    int maxArea(vector<int>& heights) {
        int currmax = 0;
        int area = 0;
        int left = 0;
        int right = heights.size() - 1;

        while (left < right){
            area = (right - left)*(min(heights[left], heights[right]));
            if (currmax < area){
                currmax = area;
            }
            if (heights[left]<heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return currmax;
    }
};
