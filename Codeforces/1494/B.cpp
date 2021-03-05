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

bool check(int u, int r, int d, int l, int n, int cnt[]) {
    if(cnt[0]) u--, l--;
    if(cnt[1]) u--, r--;
    if(cnt[2]) r--, d--;
    if(cnt[3]) d--, l--;
    n -= 2;
    return (u >= 0 && u <= n && r >= 0 && r <= n &&
            d >= 0 && d <= n && l >= 0 && l <= n);
}
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        bool ok = false;
        int n, u, r, d, l;
        cin >> n >> u >> r >> d >> l;
        For(i, 0, 16) {
            int cnt[4] = {0}, te = i;
            For(j, 0, 4) {
                cnt[3-j] = te & 1;
                te /= 2;
            }
            if(check(u, r, d, l, n, cnt)) {
                ok = true;
                break;
            }
        }
        if(ok) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}