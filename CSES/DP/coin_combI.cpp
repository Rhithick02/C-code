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
#define MAX 1000001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

lli dp[MAX];
lli fn(int n, vector <int> ar, int val) {
    if(!val) return 1;
    if(val < 0) return 0;
    if(dp[val]) return dp[val];
    int cnt = 0;
    For(i, 0, n) {
        dp[val] = (dp[val] + fn(n, ar, val-ar[i])) % mod;
    }
    return dp[val];
}
int main(){
    ios::sync_with_stdio(false);
    lli cnt = 0;
    int n, x;
    cin >> n >> x;
    vector <int> ar(n);
    For(i, 0, n) cin >> ar[i];
    cout << fn(n, ar, x) << endl;
}