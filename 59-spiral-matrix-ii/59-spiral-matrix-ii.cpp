class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int> (n));
        int k = 1, i = 0, j = 0;
        int c1 = 0, c2 = n-1, r1 = 0, r2 = n-1; //boundaries for the i and j
        int dir = 0;
        n = n*n;
        while(k <= n){
            mat[i][j] = k++;
            if(dir == 0){ 
                if(j == c2){ dir = 1; i++; r1++; }
                else j++;
            }else if(dir == 1){
                if(i == r2){ dir = 2; j--; c2--; }
                else i++;
            }else if(dir == 2){
                if(j == c1){  dir = 3; i--; r2--; }
                else j--;
            }else {
                if(i == r1){ dir = 0; j++; c1++; }
                else i--;
            }
        }
        return mat;
    }
};