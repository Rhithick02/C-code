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
 
bool can(lli time, vector <lli> ar, lli k) {
    lli n = ar.size();
    lli cnt = 0;
    For(i, 0, n) {
        cnt += time / ar[i];
        if(cnt > k) break;
    }
    if(cnt < k) return false;
    return true;
}
 
int main(){
    ios::sync_with_stdio(false);
    lli n, k, low = 1, high = 2e18, mid, ans = 2e18;
    cin >> n >> k;
    vector <lli> ar(n);
    For(i, 0, n) cin >> ar[i];
    while(low <= high) {
        mid = low + high >> 1;
        if(can(mid, ar, k)) {
            ans = min(ans, mid);
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << "\n";
}