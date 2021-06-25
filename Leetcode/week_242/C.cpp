class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.length(), prevmax = 0;
        if(s[n-1] == '1') return false;
        queue <int> q;
        vector <bool> v(n+1);
        bool ok = false;
        q.push(0);
        while(!q.empty()) {
            int prev = q.front();
            q.pop();
            for(int i = max(prevmax, prev + minJump); i <= min(n-1, prev + maxJump); i++) {
                prevmax = max(prevmax, i);
                if(v[i] || s[i] == '1') continue;
                if(i == n-1) {
                    ok = true;
                    break;
                }
                v[i] = true;
                q.push(i);
            }
            if(ok) break;
        }
        return ok;
    }
};