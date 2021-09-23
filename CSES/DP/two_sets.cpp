#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    if(sum & 1) {
        cout << "0\n";
    } else {
        sum /= 2;
        vector <vector <int>> dp(n+1, vector <int>(sum+1, 0));
        dp[0][0] = 1;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= sum; j++) {
                dp[i][j] = (dp[i-1][j] + (j>=i ? dp[i-1][j-i] : 0)) % mod;
            }
        }
        cout << dp[n][sum] << endl;
    }
}