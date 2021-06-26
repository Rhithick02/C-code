class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size(), sum = 0;
        for(int i = 1; i < (1 << n); i++) {
            int temp = i, cnt = 0, si = n;
            int te = 0;
            while(si--) {
                if(temp & 1) te ^= nums[cnt];
                cnt++;
                temp = temp >> 1;
            }
            sum += te;
        }
        return sum;
    }
};