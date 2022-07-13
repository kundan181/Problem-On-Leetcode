class Solution {
public:
        bool wordPattern(string pattern, string s) {
        
        unordered_map<int,vector<int>> map;
        
        //make a mapping of index's to use later for where the pattern letters are
        for(int i = 0; i < pattern.size();i++)
            map[pattern[i]].push_back(i);
            
        vector<string> ans;
        
        //parse string into vector of strings without spaces
        for(int i = 0; i < s.size();)
        {
            int next_space = s.find(' ',i);
            string next;
            if (next_space != std::string::npos)
            {
                next = s.substr(i, next_space - i);
                i += next_space - i + 1;
                ans.push_back(next);
            }
            else 
            {
                next = s.substr(i, s.size() - 1);
                ans.push_back(next);
                break;
            }
        }
        
        if (pattern.size() != ans.size()) return false;
            
        //check that the patterns match
        for (int i = 0; i < ans.size() / 2; i++)
        {  
            auto letter = pattern[i];
            auto str = ans[i];
            for (int j = 0; j < ans.size(); j++)
            {
                if (j == i) continue;
                if (letter == pattern[j] && ans[i] != ans[j]) return false;
                if (letter != pattern[j] && ans[i] == ans[j]) return false;
            }
        }
            
        return true;
    }
};