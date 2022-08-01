
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            int temp=arr[i];
            for(int j=0;j<arr.size();j++){
                if(i==j)continue;
                if(arr[j]==2*temp)return 1;
            }
        }
        return 0;
    }
};