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
    int a, b;
    cin >> a >> b;
    vector <vector <int>> dp(a+1, vector <int>(b+1, mod));
    for(int i = 1; i <= b; i++) {
        dp[1][i] = i-1;
        dp[0][i] = 0;
    }
    for(int i = 1; i <= a; i++) {
        dp[i][1] = i-1;
        dp[i][0] = 0;
    }
    for(int i = 2; i <= a; i++) {
        for(int j = 2; j <= b; j++) {
            if(i == j) {
                dp[i][j] = 0;
                continue;
            }
            for(int k = 1; k < i; k++) {
                dp[i][j] = min(dp[i][j], 1 + dp[i-k][j] + dp[k][j]);
            }
            for(int k = 1; k < j; k++) {
                dp[i][j] = min(dp[i][j], 1 + dp[i][j-k] + dp[i][k]);
            }
        }
    }
    cout << dp[a][b] << endl;
}