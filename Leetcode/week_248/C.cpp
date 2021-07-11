class Solution {
    int mod = 1e9 + 7;
public:
    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2, odd = n / 2;
        long long ans = 0;
        ans = (power(5, even) * power(4, odd)) % mod;
        return (int)ans;
    }
    long long power(long long x, long long y) {
        long long val = 1;
        while(y) {
            if(y & 1) {
                val = (val * x) % mod;
            }
            x = (x * x) % mod;
            y = y >> 1;
        }
        return val;
    }
};