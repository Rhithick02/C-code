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
    int n, cnt = 0;
    cin >> n;
    vector <int> ar(n), dp(n+1, mod), len(n, 0);
    for(auto &it: ar) {
        cin >> it;
    }
    dp[0] = -mod;
    for(int i = 0; i < n; i++) {
        int pos = lower_bound(dp.begin(), dp.end(), ar[i]) - dp.begin();
        dp[pos] = ar[i];
        cnt = max(cnt, pos);
    }
    cout << cnt << endl;
}