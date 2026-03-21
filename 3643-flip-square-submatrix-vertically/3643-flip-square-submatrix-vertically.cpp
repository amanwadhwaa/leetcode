class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        vector<vector<int>> result = grid;

        for(int i = 0; i < k; i++) {
            for(int j = 0; j < k; j++) {
                result[x + i][y + j] = grid[x + (k - 1 - i)][y + j];
            }
        }

        return result;
    }
};