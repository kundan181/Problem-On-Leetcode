class Solution {
public:
    void reverseString(vector<char>& s) {
        
        //reverse(s.begin(),s.end());
        //int n = s.length();
        int start = 0;
        int end = s.size()-1;
        
        while(start < end)
        {
            swap(s[start++],s[end--]);
        }
    }
};