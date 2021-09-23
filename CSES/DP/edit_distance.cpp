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
    string a, b;
    cin >> a >> b;
    int n = a.length(), m = b.length();
    vector <vector <int>> dp(n+1, vector <int>(m+1, 0));
    for(int i = 0; i <= n; i++) {
        dp[i][0] = i;
    }
    for(int i = 0; i <= m; i++) {
        dp[0][i] = i;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(a[i-1] == b[j-1]) {
                dp[i][j] = dp[i-1][j-1];
            } else {
                dp[i][j] = 1 + min(min(dp[i][j-1], dp[i-1][j]), dp[i-1][j-1]);
            }
        }
    }
    cout << dp[n][m] << endl;
}