class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> s;
        vector<int> ans;
        
        for(int i=0; i<nums1.size(); i++) s.insert(nums1[i]);
        
        int count=0;
        
        for(int i=0; i<nums2.size(); i++)
        {
            int key = nums2[i];
            if(s.find(key) != s.end())
            {
                count++;
                ans.push_back(nums2[i]);
                s.erase(key);
            }
        }
        return ans;
    }
};