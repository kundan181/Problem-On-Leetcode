class Solution {
public:
    int strStr(string haystack, string needle) {
        if (!needle.size())
            return 0;
        
        if (needle.size() > haystack.size())
            return -1;
        
        char *test = new char[(needle.size() + 1) * sizeof(char)];
        test[needle.size()] = '\0';
        const char *p = haystack.c_str();
        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            memmove(test, p + i, needle.size());
            if (!strcmp(test, needle.c_str()))
                return i;
        }
        return -1;
    }
};