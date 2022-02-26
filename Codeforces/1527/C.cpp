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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        lli ans = 0;
        int n;
        cin >> n;
        vector<lli> dp(n+1);
        map<int, lli> mp;
        for (int i = 1, x; i <= n; i++) {
            cin >> x;
            dp[i] = dp[i-1];
            dp[i] += mp[x];
            mp[x] += i;
            ans += dp[i];
        }
        cout << ans << "\n";
    }
}