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
#define MAX 1000001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

lli dp[MAX];
lli solve(lli n) {
    if(n == 0) return 1; 
    if(n < 0) return 0;
    if(dp[n] != 0) return dp[n];
    return dp[n] = (solve(n-1) + solve(n-2) + solve(n-3) + solve(n-4) + solve(n-5) + solve(n-6)) % mod;
}
int main() {
    lli n;
    cin >> n;
    cout << solve(n);
}