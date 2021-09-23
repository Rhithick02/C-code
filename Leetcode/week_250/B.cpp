class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int start = 0, ans = 0;
        int n = rungs.size();
        for(int i = 0; i < n; i++) {
            ans += (rungs[i] - start - 1) / dist;
            start = rungs[i];
        }
        return ans;
    }
};