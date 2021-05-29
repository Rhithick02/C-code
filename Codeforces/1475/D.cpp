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
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, ans = mod;
        lli sum = 0;
        cin >> n >> m;
        vector <pair<int, int>> ar(n);
        vector <lli> imp, n_imp;
        for(int i = 0; i < n; i++) {
            cin >> ar[i].fi;
            sum += ar[i].fi;
        }
        for(int i = 0; i < n; i++) {
            cin >> ar[i].se;
        }
        if(sum < m) {
            cout << "-1\n";
            continue;
        }
        for(int i = 0; i < n; i++) {
            (ar[i].se == 1 ? n_imp : imp).pb(ar[i].fi);
        }
        sort(des(imp));
        sort(des(n_imp));
        lli sum_b = accumulate(asc(imp), 0ll), sum_a = 0;
        int i = 0, j = imp.size();
        for(; i <= n_imp.size(); i++) {
            while(j > 0 && sum_b + sum_a - imp[j-1] >= m) {
                j--;
                sum_b -= imp[j];
            }
            if(sum_b + sum_a >= m) {
                ans = min(ans, 2 * j + i);
            }
            if(i != n_imp.size()) {
                sum_a += n_imp[i];
            }
        }
        cout << ans << "\n";
    }
}