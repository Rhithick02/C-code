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
    int n;
    lli ans = 2e18;
    cin >> n;
    vector <lli> ar(n), pref(n), suf(n);
    For(i, 0, n) cin >> ar[i];
    sort(asc(ar));
    pref[0] = ar[0];
    suf[n-1] = ar[n-1];
    For(i, 1, n) {
        pref[i] = ar[i] + pref[i-1];
        suf[n-i-1] = suf[n-i] + ar[n-1-i];
    }
    For(i, 0, n-1) {
        lli temp = abs(1LL*(i+1)*ar[i] - pref[i]) + abs(1LL*(n-i-1)*ar[i] - suf[i+1]);
        ans = min(ans, temp);
    }
    cout << ans << "\n";
}