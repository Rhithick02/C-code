// Removing digits
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
    vector <int> dp(n+1, mod);
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        for(char c: to_string(i)) {
            dp[i] = min(dp[i], 1 + dp[i - (c - '0')]);
        }
    }
    cout << dp[n];
}