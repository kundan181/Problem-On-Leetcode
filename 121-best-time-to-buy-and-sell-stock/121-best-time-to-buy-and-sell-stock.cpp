
class Solution 
{
    public :
        int maxProfit(vector<int>& prices)
        {
            int mini = INT_MAX, ans = 0, n = prices.size();
            for(auto x : prices)
            {
                ans = max(ans, x-mini);
                mini = min(mini, x);
            }
            return ans;
        }
};