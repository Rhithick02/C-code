class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        vector <int> alp(26);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < words[i].length(); j++) {
                alp[words[i][j] - 'a']++;
            }
        }
        bool ok = true;
        for(int i = 0; i < 26; i++) {
            if(alp[i] % n) {
                ok = false;
                break;
            }
        }
        return ok;
    }
};