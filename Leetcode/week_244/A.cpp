class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat[0].size();
        bool ok = true;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] != target[i][j]) {
                    ok = false;
                    break;
                }
            }
            if(!ok) break;
        }
        if(ok) return ok;
        ok = true;
        for(int j = 0; j < n; j++) {
            for(int i = n-1; i >= 0; i--) {
                if(mat[i][j] != target[j][n-i-1]) {
                    ok = false;
                    break;
                }
            }
            if(!ok) break;
        }
        if(ok) return ok;
        ok = true;
        for(int i = n-1; i >= 0; i--) {
            for(int j = n-1; j >= 0; j--) {
                if(mat[i][j] != target[n-1-i][n-1-j]) {
                    ok = false;
                    break;
                }
            }
            if(!ok) break;
        }
        if(ok) return ok;
        ok = true;
        for(int j = n-1; j >= 0; j--) {
            for(int i = 0; i < n; i++) {
                if(mat[i][j] != target[n-1-j][i]) {
                    ok = false;
                    break;
                }
            }
            if(!ok) break;
        }
        return ok;
    }
};