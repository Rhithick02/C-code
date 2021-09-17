#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 1000001
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    vector <vector <lli>> dp(MAX, vector <lli>(8, 0));
    for(int i = 0; i < 8; i++) {
        dp[1][i] = 1;
    }
    for(int i = 2; i < MAX; i++) {
        for(int j = 0; j < 8; j++) {
            if(j == 0 || j == 2 || j == 4 || j == 5 || j == 7) {
                dp[i][j] = (dp[i-1][0] + dp[i-1][2] + dp[i-1][4] + dp[i-1][5] + dp[i-1][6]) % mod;
            } else {
                dp[i][j] = (dp[i-1][1] + dp[i-1][3] + dp[i-1][7]) % mod;
            }
        }
    }
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << (dp[n][1] + dp[n][7]) % mod << "\n";
    }
}