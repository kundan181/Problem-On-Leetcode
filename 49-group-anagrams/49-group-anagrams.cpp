class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        map<vector<int>,vector<string>>mp;
        vector<vector<string>>ans;
		//iterate list of strings
        for(int i=0;i<n;i++){
            string s=strs[i];
            vector<int> temp(26,0);
			//count frequency of each string 
            for(int j=0;j<s.length();j++){
                temp[s[j]-'a']++;
            }
			//append or push the frequency array and string to the map
            mp[temp].push_back(s);
        }
		//simply add the list of string which are anagrams
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
