class Solution {
public:
string frequencySort(string s) {
        unordered_map<char, int> mpp;
        for(char ch : s) mpp[ch]++;
        
        priority_queue<pair<int, char>> pq;
        for(auto p : mpp) {
            pq.push({p.second, p.first});
        }
        
        string res = "";
        while(!pq.empty()) {
            pair<int, char> prr = pq.top(); pq.pop();
            int k = prr.first;
            while(k--) res += prr.second;
        }
        
        return res;
    }
};