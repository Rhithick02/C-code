#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
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

vector <vector <int>> dp(201, vector<int>(405));
int solve(int i, int T, vector <int> ar) {
    if(!T)
        return dp[i][T] = mod;
    if(!i)
        return dp[i][T] = min(abs(ar[i]-T), solve(0, T-1, ar));
    if(dp[i][T] != -1)
        return dp[i][T];
    return dp[i][T] = min(abs(ar[i]-T) + solve(i-1, T-1, ar), solve(i, T-1, ar));
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, res = 0;
        cin >> n;
        vector <int> ar(n);
        For(i, 0, n) cin >> ar[i];
        sort(asc(ar));
        For(i, 0, n) {
            For(j, 0, 405)
                dp[i][j] = -1;
        }
        cout << solve(n-1, 2*n, ar) << "\n";
    }
}