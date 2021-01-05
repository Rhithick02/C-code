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
int dp[MAX];
lli ways(int n) {
    if(!n) return 1;
    if(n < 0) return 0;
    if(dp[n]) return dp[n];
    lli sum = 0;
    For(i, 1, 7) {
        sum += ways(n-i);
        sum %= mod;
    }
    return dp[n] = sum;
}
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    cout << ways(n) << endl;
}