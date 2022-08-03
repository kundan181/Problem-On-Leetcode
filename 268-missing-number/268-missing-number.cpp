class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        int nat = nums.size()*(nums.size()+1)/2;
        
        return abs(nat-sum);
    }
};