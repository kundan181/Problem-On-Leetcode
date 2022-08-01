class Solution {
public:
    string convert(string s, int r) {
        int n=s.size();
        unordered_map<int,string>mp;
        int i=0;
        while(i<n)
        {
            for(int j=1;i<n&&j<=r;j++)
            {
                mp[j].push_back(s[i]);
                i++;
}
            for(int j=(r-1);i<n&&j>1;j--)
            {
                mp[j].push_back(s[i]);
                i++;
}
}
        string res="";
        for(int i=1;i<=r;i++)
            res+=mp[i];
        return res;
    }
};