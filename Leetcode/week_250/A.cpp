class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector <int> broken(26);
        int ans = 0;
        bool ok = true;
        for(auto it: brokenLetters) {
            broken[it-'a']++;
        }
        text += ' ';
        for(auto it: text) {
            if(it == ' ') {
                if(ok) {
                    ans++;
                } else {
                    ok = true;
                }
            } else {
                if(broken[it-'a']) {
                    ok = false;
                }
            }
        }
        return ans;
    }
};