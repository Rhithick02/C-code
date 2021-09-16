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
    vector <int> dp(n+1, mod);
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        for(auto it: to_string(i)) {
            dp[i] = min(dp[i], 1+dp[i-(it-'0')]);
        }
    }
    cout << dp[n] << endl;
}