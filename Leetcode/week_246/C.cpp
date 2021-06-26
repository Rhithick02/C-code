class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1[0].size(), n = grid1.size(), cnt = 0;
        vector <vector<bool>> vi(n, vector<bool>(m, 0));
        vector <vector<pair<int,int>>> ans;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(vi[i][j] || !grid2[i][j]) continue;
                vector <pair<int, int>> temp;
                dfs(i, j, vi, grid2, temp);
                ans.push_back(temp);
            }
        }
        for(auto vec: ans) {
            bool ok = true;
            for(auto it: vec) {
                if(!grid1[it.first][it.second]) {
                    ok = false;
                    break;
                }
            }
            if(ok) cnt++;
        }
        return cnt;
    }
    void dfs(int x, int y, vector<vector<bool>> &vi, vector<vector<int>> &ar, vector <pair<int, int>> &temp) {
        if(!ar[x][y]) return;
        vi[x][y] = true;
        temp.push_back({x, y});
        if(x+1 < vi.size() && !vi[x+1][y]) {
            dfs(x+1, y, vi, ar, temp);
        }
        if(x-1 >= 0 && !vi[x-1][y]) {
            dfs(x-1, y, vi, ar, temp);
        }
        if(y+1 < vi[0].size() && !vi[x][y+1]) {
            dfs(x, y+1, vi, ar, temp);
        }
        if(y-1 >= 0 && !vi[x][y-1]) {
            dfs(x, y-1, vi, ar, temp);
        }
    }
};