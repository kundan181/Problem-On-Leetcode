
//Approch 1 : finding the median and compare it with mean 
//NlogN -> Time
//O(1)  -> Space
// class Solution {
// public:
//     int minMoves2(vector<int>& nums) {
        
//         int n = nums.size();
//         //sort the array
//         sort(nums.begin(), nums.end());
//         //find the median
//         int median = n%2==0 ? (nums[n/2] + nums[n/2-1]) / 2 : nums[n/2];
        
//         int steps = 0;
        
//         for(int num : nums)
//         {
//             steps += abs(num-median);
//         }
//         return steps;
//     }
// };




//Approch 2 : two pointer tech
//NlogN -> Time
//O(1)  -> Space
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        //sort the array first
        sort(nums.begin(),nums.end());
        
        //calculate the steps by taking two pointers
        
        int steps = 0;
        int start = 0;
        int end = nums.size()-1;
        
        while(start <= end)
        {
            steps += nums[end] - nums[start];
            start++;
            end--;
        }
        
        return steps;
    }
};