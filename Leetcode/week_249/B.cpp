class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.length(), cnt = 0;
        for(int i = 0; i < 26; i++) {
            vector <int> store;
            for(int j = 0; j < n; j++) {
                if(s[j] == 'a' + i) {
                    store.push_back(j);
                }
            }
            if(store.size() <= 1) continue;
            bool ok = false;
            set <int> te;
            for(int j = 0; j < store.size() - 1; j++) {
                vector <int> hash(26);
                for(int k = store[j]; k <= store[j+1]; k++) {
                    hash[s[k] - 'a']++;
                }
                for(int k = 0; k < 26; k++) {
                    if(!hash[k]) continue;
                    if(i == k) {
                        if(hash[k] > 2) {
                            ok = true;
                        }
                        continue;
                    }
                    te.insert(k);
                }
            }
            cnt += te.size();
            if(ok || store.size() > 2) {
                cnt++;
            }
        }
        return cnt;
    }
};