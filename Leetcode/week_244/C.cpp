class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        s += s;
        string s1 = "", s2 = "";
        for(int i = 0; i < 2 * n; i++) {
            s1 += (i % 2 ? '1' : '0');
            s2 += (i % 2 ? '0' : '1');
        }
        int cnt[3] = {0, 0, 100000};
        for(int i = 0; i < 2 * n; i++) {
            if(s[i] != s1[i]) cnt[0]++;
            if(s[i] != s2[i]) cnt[1]++;
            if(i >= n) {
                if(s[i - n] != s1[i - n]) cnt[0]--;
                if(s[i - n] != s2[i - n]) cnt[1]--;
            }
            if(i >= n - 1) {
                cnt[2] = min(cnt[2], min(cnt[0], cnt[1]));
            }
        }
        return cnt[2];
    }
};