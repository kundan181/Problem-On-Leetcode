class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
       int duplicate=0;
       map<int,int> mp;
        
        for(auto i=0; i<nums.size(); ++i)
        {
            ++mp[nums[i]];
        }
        
        for(auto i:mp)
        {
            if(i.second > 1)
            {
                duplicate = i.first;
            }
        }
        return duplicate;
    }
};