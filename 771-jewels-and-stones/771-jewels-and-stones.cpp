class Solution {
public:
    int numJewelsInStones(string jew, string sto) {
        
        int m = jew.length();
        int n = sto.length();
        int count = 0;
        
        sort(jew.begin(),jew.end());
        sort(sto.begin(),sto.end());
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(jew[i] == sto[j]){
                    
                    count++;
                }
            }
        }
        if(count >= 1)
        {
            return count;
        }
        else
        {
            return 0;
        }
    }
};