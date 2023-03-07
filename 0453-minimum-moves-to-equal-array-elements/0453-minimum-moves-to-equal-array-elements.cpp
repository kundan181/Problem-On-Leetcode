class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int mm=0;
        int minElem = *min_element(nums.begin(),nums.end());
        
        for(int i:nums)
        {
            mm = mm + i-minElem;
        }
        return mm;
    }
};
