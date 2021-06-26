class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        int idx = n-1;
        for(int i = n-1; i >= 0; i--) {
            if((num[i] - '0') % 2 != 0) {
                break;
            }
            idx--;
        }
        string ans = "";
        for(int  i = 0; i <= idx; i++) {
            ans += num[i];
        }
        return ans;
    }
};