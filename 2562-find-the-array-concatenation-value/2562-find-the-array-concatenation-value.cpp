class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n = nums.size(), l, r;
        l = 0; r = n-1;
        long long int ans = 0;
        while (l <= r) {
            if (l == r) {
                ans += nums[l];
                break;
            }
            string a = to_string(nums[l++]);
            string b = to_string(nums[r--]);
            a = a+b;
            ans += stoi(a);
        }
        return ans;
    }
};