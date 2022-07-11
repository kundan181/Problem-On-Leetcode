class Solution {
public:
    //Trick is to find a value which a lower value on its left and a larger value towards right
    //For this create a max array that store max value towards right till that index
    //min till that index can be calculated simultaneously 
    bool increasingTriplet(vector<int>& nums) {
        int mn = nums[0];
        vector<int> mx(nums.size(), INT_MIN);
        mx[nums.size() - 1] = nums.back();
        for(int i = nums.size()-2; i >= 0; i--)  mx[i] = max(nums[i], mx[i+1]);
        
        for(int i = 1; i < nums.size()-1; ++i){
            if(nums[i] > mn && nums[i] < mx[i]) return true;
            mn = min(mn, nums[i]);
        }
        return false;
    }
};