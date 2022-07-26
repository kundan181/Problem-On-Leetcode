
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for (int i: nums) mp[i]++;
        vector<pair<int, int>> cont;
        for (auto c: mp) cont.push_back({c.second, c.first});
        priority_queue<pair<int, int>> q(cont.begin(), cont.end());
        
        while (k--) {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};