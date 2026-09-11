class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>,vector<pair<int,int>>,greater<pair<int,int>>> heap;

        for (int i = 0; i < points.size(); i++) {
            int x = points[i][0];
            int y = points[i][1];
            int distance = x * x + y * y;

            heap.push({distance, i});
        }

        vector<vector<int>> answer;

        while (k > 0) {
            int pointIndex = heap.top().second;
            answer.push_back(points[pointIndex]);

            heap.pop();
            k--;
        }

        return answer;
    }
};