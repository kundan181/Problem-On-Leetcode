class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> maxh;

        for(auto p : points) {
            maxh.push({p[0] * p[0] + p[1] * p[1], p});
            if(maxh.size() > k) maxh.pop();
        }
        
        vector<vector<int>> ans;
        while(!maxh.empty()) ans.push_back(maxh.top().second), maxh.pop();
        return ans;
    }
};