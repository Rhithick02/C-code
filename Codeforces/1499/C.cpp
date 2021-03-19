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
#define INF 1e18
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, even = 0, odd = 0;
        cin >> n;
        vector <lli> ar(n);
        lli cost[2] = {(lli)INF, (lli)INF}, seven = 0, sodd = 0, ans = (lli)INF;
        For(i, 0, n) cin >> ar[i];
        For(i, 0, n) {
            if(i % 2) {
                sodd += ar[i];
                odd++;
                cost[1] = min(cost[1], ar[i]);
            } else {
                seven += ar[i];
                even++;
                cost[0] = min(cost[0], ar[i]);
            }
            if(i) {
                ans = min(ans, seven + 1ll * (n-even) * cost[0] + sodd + 1ll * (n-odd) * cost[1]);
            }
        }
        cout << ans << "\n";
    }
}