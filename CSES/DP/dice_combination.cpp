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

vector <lli> dp(MAX);
lli count(lli n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    if (dp[n]) return dp[n];
    return dp[n] = (count(n-1) + count(n-2) + count(n-3) + count(n-4) + count(n-5) + count(n-6)) % mod;
}
int main() {
    lli n;
    cin >> n;
    cout << count(n) << endl;
}