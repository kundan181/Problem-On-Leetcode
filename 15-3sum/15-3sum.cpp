class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
    int n=nums.size();
    set<vector<int>> res;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++)
    {
        int target = -nums[i];
        int l=i+1,r=n-1;
        while(l<r)
        {
            int sum = nums[l]+nums[r];
            if(sum == target)
                res.insert({nums[i],nums[l++],nums[r--]});
            else if(sum < target)   l++;
            else    r--;
        }
    }
    vector<vector<int>> ans;
    for(auto it:res)
        ans.push_back(it);
    return ans;
}
};