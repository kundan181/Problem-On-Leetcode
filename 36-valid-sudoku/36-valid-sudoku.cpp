class Solution {
public:
   bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9] = {0}, cols[9][9] = {0}, sub_box[9][9] = {0};
        
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[i].size(); j++)
            {
                if(board[i][j] == '.') continue;
                
                int num = board[i][j] - '0' - 1;
                int row_num = i, col_num = j;
                int box_num = 3 * (row_num / 3) + (col_num / 3);
                
                if(rows[row_num][num] || cols[col_num][num]|| sub_box[box_num][num])
                {
                    return false;
                }
                
                rows[row_num][num] = 1;
                cols[col_num][num] = 1;
                sub_box[box_num][num] = 1;
            }
        }
        
        return true;
    }
};

