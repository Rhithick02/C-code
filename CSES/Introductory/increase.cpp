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

int main(){
    ios::sync_with_stdio(false);
    lli ans = 0;
    int n;
    cin >> n;
    vector <lli> ar(n);
    For(i, 0, n) cin >> ar[i];
    for(int i = 1; i < n; i++) {
        ar[i] = max(ar[i], ar[i-1]);
        ans += max(1LL * 0, ar[i-1] - ar[i]);
    }
    cout << ans << "\n";
}