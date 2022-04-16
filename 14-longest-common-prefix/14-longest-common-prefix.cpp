class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp;
        bool flag = true;
        string init = strs[1];
        if (strs.size() == 1)
                return strs[0];
        else {
            for (int i = 0; i < init.size(); i++) {
                for(int j = 0; j < strs.size(); j++) {
                    if (init[i] != strs[j][i])
                        flag = false;
                }
            
                if (flag)
                    lcp += init[i];
            }
        }
        return lcp;
    }
};