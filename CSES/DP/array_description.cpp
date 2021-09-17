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
    int n, m;
    cin >> n >> m;
    vector <int> ar(n);
    vector <vector <long>> dp(n, vector <long> (m+1, 0));
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    if(ar[0]) {
        dp[0][ar[0]] = 1;
    } else {
        for(int i = 0; i <= m; i++) {
            dp[0][i] = 1;
        }
    }
    for(int i = 1; i < n; i++) {
        if(ar[i] == 0) {
            for(int j = 0; j <= m; j++) {
                dp[i][j] = (j-1 >= 1 ? dp[i-1][j-1]:0) + (j >= 1 ? dp[i-1][j]:0) + (j+1 <= m ? dp[i-1][j+1]:0);
                dp[i][j] %= mod;
            }
        } else {
            int x = ar[i];
            dp[i][x] = (x-1 >= 1 ? dp[i-1][x-1]:0) + dp[i-1][x] + (x+1 <= m ? dp[i-1][x+1]:0);
            dp[i][x] %= mod;
        }
    }
    lli ans = 0;
    // for(int i = 0; i <= n; i++) {
    //     for(int j = 0; j <= m; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for(int i = 1; i <= m; i++) {
        ans = (ans + dp[n-1][i]) % mod;
    }
    cout << ans << endl;
}