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
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, m, cnt = 0;
        cin >> n >> m;
        vector <string> ar(n);
        vector <vector <int>> dp(n+2, vector <int> (m+2, 0));
        string s;
        For(i, 0, n) {
            cin >> s;
            ar[i] = s;
        }
        for(int i = n; i >= 1; i--) {
            for(int j = 1; j <= m; j++) {
                if(ar[i-1][j-1] == '.') continue;
                dp[i][j] = 1 + min(dp[i+1][j], min(dp[i+1][j+1], dp[i+1][j-1]));
                cnt += dp[i][j];
            }
        }
        cout << cnt << "\n";
    }
}