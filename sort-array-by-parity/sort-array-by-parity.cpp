

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        int n=a.size();
        int lb=0,ub=n-1;
        while(lb<ub)
        {
            if(a[lb]%2!=0 && a[ub]%2==0)
            {
                swap(a[lb],a[ub]);
            }
            else if(a[lb]%2==0)
            {
                lb++;
            }
            else
            {
                ub--;
            }
        }
        return a;
    }
};