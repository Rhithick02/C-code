class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int cnt = 0, i = 50000, k = 49999, mini = 50001;
        int n = nums.size();
        vector <int> hash(50001, 0);
        for(int i = 0; i < n; i++) {
            hash[nums[i]]++;
            mini = min(mini, nums[i]);
        }
        while(i > mini) {
            while(!hash[k]) k--;
            hash[k] += hash[i];
            cnt += hash[i];
            i = k;
            k = i - 1;
        }
        return cnt;
    }
};