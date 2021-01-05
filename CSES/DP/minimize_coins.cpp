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

int main(){
    ios::sync_with_stdio(false);
    int n, x;
    cin >> n >> x;
    vector <int> ar(n), dp(x+1);
    For(i, 0, n) cin >> ar[i];
    For(i, 1, x+1) dp[i] = mod;
    For(i, 1, x+1) {
        For(j, 0, n) {
            if(i - ar[j] < 0) continue;
            dp[i] = min(dp[i], 1 + dp[i-ar[j]]);
        }
    }
    cout << (dp[x] != mod ? dp[x]:-1) << endl;
}