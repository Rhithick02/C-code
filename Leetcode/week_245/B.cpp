class Solution {
public:
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int ans = 0, low = 0, high = removable.size(), mid;
        while(low <= high) {
            mid = low + high >> 1;
            vector <bool> st(100001);
            for(int i = 0; i < mid; i++) {
                st[removable[i]] = true;
            }
            bool ok = false;
            int k = 0;
            for(int i = 0; i < s.length(); i++) {
                if(s[i] == p[k] && !st[i]) {
                    k++;
                }
                if(k == p.length()) {
                    ok = true;
                    break;
                }
            }
            if(ok) {
                ans = max(ans, mid);
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};