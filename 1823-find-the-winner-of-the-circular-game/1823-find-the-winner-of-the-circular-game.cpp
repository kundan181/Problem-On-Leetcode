class Solution {
public:
    int findTheWinner(int n, int k) {
        list<int>l;
        for (int i = 0; i < n; i++) {
                l.push_back(i);
        }
        int ans = 0;
        auto it = l.begin();
        while(l.size()>1)
        {
    
            for (int j = 1; j < k; ++j) {
                it++;
                if (it==l.end()) it = l.begin();
            }
            it = l.erase(it);
            if (it==l.end()) it = l.begin();
        }
        return l.front()+1;
    }
};