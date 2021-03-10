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

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, x, y;
        double ans = 0;
        cin >> n;
        vector <lli> mine, diam;
        For(i, 0, 2 * n) {
            cin >> x >> y;
            if(x) diam.pb(abs(x));
            else mine.pb(abs(y));
        }
        sort(asc(mine)), sort(asc(diam));
        For(i, 0, n) {
            lli te = mine[i] * mine[i] + diam[i] * diam[i];
            ans += 1.0 * sqrt(te);
        }
        cout << setprecision(12) << ans << "\n";
    }
}