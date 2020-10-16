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
    int t;
    cin >> t;
    while(t--) {
        lli a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        lli res[2];
        lli te[2];
        te[0] = min(n, a-x);
        te[1] = min(n, b-y);
        res[0] = (a - te[0]) * max(y, (b - (n - te[0])));
        res[1] = (b - te[1]) * max(x, (a - (n - te[1])));
        cout << min(res[0], res[1]) << "\n";
    }
}