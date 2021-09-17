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
    int n, price;
    cin >> n >> price;
    vector <int> pages(n), value(n);
    vector <vector <int>> dp(n+1, vector <int> (price+1, 0));
    for(int i = 0; i < n; i++) {
        cin >> value[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> pages[i];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= price; j++) {
            dp[i][j] = max(dp[i-1][j], (j-value[i-1]>=0 ? pages[i-1] + dp[i-1][j-value[i-1]] : 0));
        }
    }
    cout << dp[n][price] << endl;
}