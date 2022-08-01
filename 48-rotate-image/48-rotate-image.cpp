class Solution {
public:
    void swap(int &a, int &b) {
        int c=a;
        a=b;
        b=c;
    }
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
             
        for(int i=0;i<m;i++){
            for(int j=i;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<m;i++) {
            reverse(matrix[i].begin(),matrix[i].end());
        }          
    }
};