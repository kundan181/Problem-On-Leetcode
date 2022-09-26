// class Solution {
// public:
//     string reverseWords(string& s) {
//         int i = 0;
//         for (int j = 0; j < s.size(); ++j) {
//             if (s[j] == ' ') {
//                 reverse(s.begin() + i, s.begin() + j);
//                 i = j + 1;
//             }
//         }
//         reverse(s.begin() + i, s.end());
//         return s;
//     }
// };


class Solution {
public:
    string reverseWords(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != ' ') {   // when i is a non-space
                int j = i;
                for (; j < s.length() && s[j] != ' '; j++) { } // move j to the next space
                reverse(s.begin() + i, s.begin() + j);
                i = j - 1;
            }
        }
        
        return s;
    }
};