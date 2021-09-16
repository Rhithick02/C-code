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
    vector <string> ar(n);
    vector <vector <int>> dp(n, vector <int>(n, 0));
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    for(int i = 0; i < n; i++) {
        if(ar[0][i] == '*') break;
        dp[0][i] = 1;
    }
    for(int i = 0; i < n; i++) {
        if(ar[i][0] == '*') break;
        dp[i][0] = 1;
    }
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if(ar[i][j] == '*') {
                dp[i][j] = 0;
                continue;
            }
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
        }
    }
    cout << dp[n-1][n-1] << endl;
}