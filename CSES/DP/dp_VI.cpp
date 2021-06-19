// Grid paths
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int n;
    cin >> n;
    char ch[n][n];
    int dp[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> ch[i][j];
        }
    }
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(ch[i][j] == '*') {
                dp[i][j] = 0;
                continue;
            }
            if(i) dp[i][j] = (dp[i][j] + dp[i-1][j]) % mod;
            if(j) dp[i][j] = (dp[i][j] + dp[i][j-1]) % mod;
        }
    }
    cout << dp[n-1][n-1];
}