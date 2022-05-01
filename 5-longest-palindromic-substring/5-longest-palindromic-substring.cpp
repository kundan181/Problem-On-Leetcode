class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        
        // Marking all the single letter and double letter palindromes as true
        for(int i=0; i<n; i++) {
            dp[i][i] = true;
            if (i>0 && s[i-1] == s[i]) dp[i-1][i] = true;
        }
        
        // Precomputing for all other possible substring
        for(int i=n-3; i>=0; i--) {
            for (int j=n-1; j>i+1; j--) {
                if (s[i]==s[j] && dp[i+1][j-1]) dp[i][j] = true;  
            }
        }
        
        // Checking for the longest palindrome from all precomputed palindromes from dp matrix
        vector<int> max_pal = {0,0};
        int max_len = 0;
        for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) {
                if(dp[i][j] && j-i+1>max_len) {
                    max_len = j-i+1;
                    max_pal[0] = i;
                    max_pal[1] = j;
                }
            }
        }
        return s.substr(max_pal[0], max_len);
    }
};