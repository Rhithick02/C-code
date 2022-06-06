#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 40001
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

// vector <vector<lli>> dp(500, vector <lli> (MAX, -1));
bool is_palindrome(int x) {
    vector <int> temp;
    while (x) {
        temp.pb(x%10);
        x /= 10;
    }
    reverse(temp.begin(), temp.end());
    int n = temp.size();
    for (int i = 0; i < n/2; i++) {
        if (temp[i] != temp[n-1-i]) {
            return false;
        }
    }
    return true;
}
// lli solve(vector <int>& ar, int n, int i, int weight) {
//     if (weight == 0) {
//         return 1;
//     } else if (i == n || weight < 0) {
//         return 0;
//     } else if (dp[i][weight] != -1) {
//         return dp[i][weight];
//     }
//     return dp[i][weight] = (solve(ar, n, i, weight-ar[i])+solve(ar, n, i+1, weight)) % mod;
// }


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <int> ar;
    for (int i = 1; i < MAX; i++) {
        if (is_palindrome(i)) {
            ar.pb(i);
        }
    }
    int n = ar.size();
    vector <int> dp(MAX);
    dp[0] = 1;
    for (int j = 0; j < n; j++) {
        for (int i = 1; i < MAX; i++) {
            if (ar[j] <= i) {
                dp[i] = (dp[i] + dp[i-ar[j]]) % mod;
            }
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        // cout << solve(ar, n, 0, x) << "\n";
        cout << dp[x] << "\n";
    }
}