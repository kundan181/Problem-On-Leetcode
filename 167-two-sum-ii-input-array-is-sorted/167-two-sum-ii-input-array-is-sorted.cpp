// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> v;
//         int n = nums.size();
//         for(int i=0; i<n; i++)
//         {
//             for(int j=i+1; j<n; j++)
//             {
//                 if(nums[i] + nums[j] == target)
//                 {
//                     v.push_back(i+1);   
//                     v.push_back(j+1);
//                 }
//             }
//         }
//         return v;
//     }
// };

class Solution {
    public:
         vector<int> twoSum(vector<int>& numbers, int target) {
    
    int l = 0;
    int r = numbers.size() -1;
   
    while(l < r){
        if(numbers[l] + numbers[r] == target){
           
            return {l+1,r+1};;
        }
        else if(numbers[l] + numbers[r] > target){
            r--;
        }
        else{
            l++;
        }
    }
	return {};
}
};


