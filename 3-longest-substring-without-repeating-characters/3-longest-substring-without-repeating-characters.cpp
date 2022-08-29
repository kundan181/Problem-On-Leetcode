class Solution {
public:
     int lengthOfLongestSubstring(string s) 
{
    int i=0,j=0;
    
    unordered_map<char,int>ump;
    int ans=0,count=0;        
    while(j<s.length())
    {
        if(ump.find(s[j])==ump.end())
        {
            ump[s[j]]++;
            
            int sz=ump.size();
            ans=max(sz,ans);
             j++;
            
        }
        else
        {
             int sz=ump.size();
            ans=max(sz,ans);
            
            while(i<s.length() && ump.find(s[j])!=ump.end())
            {
                ump.erase(s[i]);
                i++;
            }
            
        }
        
       
    }
    
    ans=max(count,ans);
    
    return ans;
}
};