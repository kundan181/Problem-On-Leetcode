
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxx=0;
        for(int i=arr.size()-1;i>=0;--i)
        {
            if(i==arr.size()-1)
            {
                maxx=arr[i];
                arr[i]=-1;
                continue;
            }
            int num=arr[i];
            arr[i]=maxx;
        maxx=max(maxx,num);
        }
        return arr;
    }
};