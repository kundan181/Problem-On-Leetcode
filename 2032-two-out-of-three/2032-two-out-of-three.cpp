class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
       set<int> a,b,c;
        for(auto x:nums1) a.insert(x);
        for(auto x:nums2) b.insert(x);
        for(auto x:nums3) c.insert(x);
        map<int,int> ans;
        for(auto x : a) ans[x]++;
        for(auto x : b) ans[x]++;
        for(auto x : c) ans[x]++;
        vector<int> res;
        for(auto x : ans){
            if(x.second >1) res.push_back(x.first);
        }
        return res;
    }
};