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
    vector <int> ar(n), dp(n, mod);
    for(auto &it : ar) cin >> it;
    dp[0] = 0;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j <= min(n-1, i + ar[i]); j++) {
            dp[j] = min(dp[j], dp[i] + 1);
        }
    }
    cout << dp[n-1] << endl;
}