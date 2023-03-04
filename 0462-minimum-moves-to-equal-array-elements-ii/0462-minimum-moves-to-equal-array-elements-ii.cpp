//NlogN -> Time
//O(1)  -> Space

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        int n = nums.size();
        //sort the array
        sort(nums.begin(), nums.end());
        //find the median
        int median = n%2==0 ? (nums[n/2] + nums[n/2-1]) / 2 : nums[n/2];
        
        int steps = 0;
        
        for(int num : nums)
        {
            steps += abs(num-median);
        }
        return steps;
        
    }
};