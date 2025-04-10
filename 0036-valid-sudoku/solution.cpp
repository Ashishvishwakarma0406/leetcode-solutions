class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Initialize sets to track digits in each row, column, and 3x3 box
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);
        
        // Iterate through each cell in the board
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                // Skip empty cells
                if (board[i][j] == '.') {
                    continue;
                }
                
                char val = board[i][j];
                
                // Calculate the box index (0-8)
                int boxIndex = (i / 3) * 3 + (j / 3);
                
                // Check if the digit already exists in the current row, column, or box
                if (rows[i].count(val) > 0 || cols[j].count(val) > 0 || boxes[boxIndex].count(val) > 0) {
                    return false;
                }
                
                // Add the digit to the respective sets
                rows[i].insert(val);
                cols[j].insert(val);
                boxes[boxIndex].insert(val);
            }
        }
        
        // If no duplicates were found, the board is valid
        return true;
    }
};
