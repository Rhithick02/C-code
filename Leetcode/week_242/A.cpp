class Solution {
public:
    bool checkZeroOnes(string s) {
        int n = s.length(), cnt[2] = {0, 0};
        int temp = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') temp++;
            else {
                cnt[0] = max(cnt[0], temp);
                temp = 0;
            }
        }
        cnt[0] = max(cnt[0], temp);
        temp = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') temp++;
            else {
                cnt[1] = max(cnt[1], temp);
                temp = 0;
            }
        }
        cnt[1] = max(cnt[1], temp);
        if(cnt[0] > cnt[1]) return true;
        return false;
    }
};