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
    int n, x;
    cin >> n >> x;
    vector <int> ar(n), dp(x+1);
    dp[0] = 1;
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    for(int j = 0; j < n; j++) {
        for(int i = 1; i <= x; i++) {
            if(i - ar[j] < 0) continue;
            dp[i] = (dp[i] + dp[i-ar[j]]) % mod;
        }
    }
    cout << dp[x] << endl;
}