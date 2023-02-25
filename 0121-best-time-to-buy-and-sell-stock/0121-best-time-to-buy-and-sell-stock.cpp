class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxProfit = 0;
      int minPrice = INT_MAX;

      for(int i=0; i<prices.size(); i++)
      {
            //update the minPrice 
            minPrice = min(minPrice,prices[i]);
            //update the maxProfit
            maxProfit = max(maxProfit, prices[i]-minPrice);
      }
      return maxProfit;

    }
};


//Time Complexity - O(n)
//Space Complexity - O(1)