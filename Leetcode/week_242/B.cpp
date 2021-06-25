class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low = 1, high = 1e7, mid;
        int n = dist.size(), speed = 1e8;
        while(low <= high) {
            mid = (low + high) >> 1;
            double temp = 0;
            for(int i = 0; i < n-1; i++) {
                temp += ((dist[i] + mid - 1) / mid);
            }
            temp += 1.0 * dist[n-1] / mid;
            if(temp <= hour) {
                speed = min(speed, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if(speed != 1e8) return speed;
        return -1;
    }
};