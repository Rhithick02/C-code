class Solution {
public:
    string maxValue(string n, int x) {
        int idx = 0;
        string ans = "";
        if(n[0] != '-') {
            for(int i = 0; i < n.length(); i++) {
                if(n[i] - '0' >= x) {
                    idx++;
                    continue;
                }
                break;
            }
            for(int i = 0; i < idx; i++) ans += n[i];
            ans += '0' + x;
            for(int i = idx; i < n.length(); i++) ans += n[i];
        } else {
            idx = 1;
            for(int i = 1; i < n.length(); i++) {
                if(n[i] - '0' <= x) {
                    idx++;
                    continue;
                }
                break;
            }
            for(int i = 0; i < idx; i++) ans += n[i];
            ans += '0' + x;
            for(int i = idx; i < n.length(); i++) ans += n[i];
        }
        return ans;
    }
};