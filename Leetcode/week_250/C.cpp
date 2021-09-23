class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int n = points.size(), m = points[0].size();
        vector <vector <long long>> dp(n, vector <long long> (m, 0));
        for(int i = 0; i < m; i++) {
            dp[0][i] = points[0][i];
        }
        for(int i = 1; i < n; i++) {
            vector <long long> l2r(m), r2l(m);
            for(int j = 0; j < m; j++) {
                l2r[j] = dp[i-1][j] - j;
                r2l[j] = dp[i-1][j] - (m-1-j);
            }
            for(int j = 1; j < m; j++) {
                l2r[m-1-j] = max(l2r[m-1-j], l2r[m-j]);
                r2l[j] = max(r2l[j], r2l[j-1]);
            }
            for(int j = 0; j < m; j++) {
                dp[i][j] = points[i][j] + max(l2r[j]+j, r2l[j]+m-1-j);
            }
        }
        long long ans = 0;
        for(int i = 0; i < m; i++) {
            ans = max(ans, dp[n-1][i]);
        }
        return ans;
    }
};