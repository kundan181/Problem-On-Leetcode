class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       if (n == 1)
    {
        return 1;
    }
    if (trust.size() < n - 1)
    {
        return -1;
    }

    unordered_map<int, int> map1;
    unordered_map<int, int> map2;

    for (int i = 0; i < trust.size(); i++)
    {
        map1[trust[i][0]]++;
    }
    for (int i = 0; i < trust.size(); i++)
    {
        map2[trust[i][1]]++;
    }

    int ans = -1;

    for (auto i : map2)
    {
        if (map1.find(i.first) == map1.end())
        {
            if (i.second == n - 1)
            {
                return i.first;
            }
        }
    }
    return ans;
}
};