/*
    sort
    1 2 3 4 5
    if(i<i+1<i+2)

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++)
        {
            //i=0, j=i+1, k=j+1
            //nums[i] < nums[j]
            //nums[j] < nums[k]
            for(int j=i+1; j<nums.size(); j++)
            {
                if(nums[i] < nums[j])
                
                for(int k=j+1; k<nums.size(); k++)
                {
                    if(nums[j] < nums[k])
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};


class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    
    //sort(nums.begin(),nums.end());
    for(int i=0; i<nums.size(); i++)
    {
       if(nums[i]<nums[i+1])
       {
           if(nums[i+1]<nums[i+2])
           {
               return true;
           }
       }
    }
    return false;
    }
};

*/



class Solution{
    public:
        bool increasingTriplet(vector<int>& nums) {
    int c1 = INT_MAX, c2 = INT_MAX;
    for (int x : nums) {
        if (x <= c1) {
            c1 = x;           // c1 is min seen so far (it's a candidate for 1st element)
        } else if (x <= c2) { // here when x > c1, i.e. x might be either c2 or c3
            c2 = x;           // x is better than the current c2, store it
        } else {              // here when we have/had c1 < c2 already and x > c2
            return true;      // the increasing subsequence of 3 elements exists
        }
    }
    return false;
}
};