class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size(), t = 0;
        vector <int> time(n);
        for(int i = 0; i < n; i++) {
            time[i] = (dist[i] + speed[i] - 1) / speed[i];
        }
        sort(time.begin(), time.end());
        for(int i = 0; i < n; i++) {
            if(t < time[i]) {
                t++;
            } else {
                return t;
            }
        }
        return t;
    }
};