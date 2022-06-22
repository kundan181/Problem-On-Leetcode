class Solution {
public:
   bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char,int> m;
        for(int i=0;i<magazine.length();i++)
        {
            ++m[char(magazine[i])];
        }
        for(auto c:ransomNote)
        {
            if((m[c]--)==0)
                return false;
        }
        
    
        return true;
        
        
        
    }
};


