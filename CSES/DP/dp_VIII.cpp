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
    int n, m;
    cin >> n >> m;
    vector <int> ar(n);
    int dp[n][m+1];
    memset(dp, 0, sizeof(dp));
    cin >> ar[0];
    if(ar[0]) {
        dp[0][ar[0]] = 1;
    } else {
        for(int i = 0; i <= m; i++) {
            dp[0][i] = 1;
        }
    }
    for(int i = 1; i < n; i++)
        cin >> ar[i];
    for(int i = 1; i < n; i++) {
        if(!ar[i]) {
            for(int j = 1; j <= m; j++) {
                for(int k = j-1; k <= j+1; k++) {
                    if(k < 1 || k > m) continue;
                    dp[i][j] = (dp[i][j] + dp[i-1][k]) % mod;
                }
            }
        } else {
            int x = ar[i];
            for(int k = x-1; k <= x+1; k++) {
                if(k < 1 || k > m) continue;
                dp[i][x] = (dp[i][x] + dp[i-1][k]) % mod;
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= m; i++) {
        ans = (ans + dp[n-1][i]) % mod;
    }
    cout << ans << endl;
}