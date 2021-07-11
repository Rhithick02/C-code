class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0; i < min(n, m) / 2; i++) {
            int row = n - 2 * i;
            int col = m - 2 * i;
            int layer = 2 * (col + row - 2);
            for(int j = 0; j < k % layer; j++) {
                solve(grid, i, n, m);
            }
        }
        return grid;
    }
    void solve(vector<vector<int>> &grid, int idx, int n, int m) {
        int temp;
        temp = grid[idx][idx];
        for(int i = idx+1; i <= m-idx-1; i++) {
            grid[idx][i-1] = grid[idx][i]; 
        }
        for(int i = idx+1; i <= n-idx-1; i++) {
            grid[i-1][m-idx-1] = grid[i][m-idx-1]; 
        }
        for(int i = m-idx-1; i > idx; i--) {
            grid[n-idx-1][i] = grid[n-idx-1][i-1];
        }
        for(int i = n-idx-1; i > idx+1; i--) {
            grid[i][idx] = grid[i-1][idx];
        }
        grid[idx+1][idx] = temp;
    }
};