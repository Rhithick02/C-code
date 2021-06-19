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
    int n, x;
    cin >> n >> x;
    vector <int> price(n), pages(n);
    for(int i = 0; i < n; i++)
        cin >> price[i];
    for(int i = 0; i < n; i++)
        cin >> pages[i];
    int dp[n+1][x+1];
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= x; j++) {
            dp[i+1][j] = max(dp[i][j],(j - price[i] >= 0 ? pages[i] + dp[i][j - price[i]] : 0));
        }
    }
    cout << dp[n][x];
}