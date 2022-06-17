class Solution {
public:
    int countPrimes(int n) {
        vector<bool>v(n+1, true);
        v[1] = false;
        v[0] = false;
        for(int i=2;i*i<=n;i++){
            if(v[i]==true){
                for(int j=i*i; j<=n; j = j+i){
                    v[j] = false;
                }
            }
        }
        int count = 0;
        for(int i=2;i<n;i++){
            if(v[i]==true){
                count++;
            }
        }
        return count;
    }
};