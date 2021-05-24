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
        vector <int> imp, n_imp;
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
        for(int i = 1; i < imp.size(); i++) {
            imp[i] += imp[i-1];
        }
        for(int i = 1; i < n_imp.size(); i++) {
            n_imp[i] += n_imp[i-1];
        }
        int pos = lower_bound(asc(n_imp), m) - n_imp.begin();
        if(pos != n_imp.size())
            ans = pos + 1;
        for(int i = 0; i < imp.size(); i++) {
            int to = m - imp[i];
            pos = lower_bound(asc(n_imp), to) - n_imp.begin();
            ans = min(ans, i * 2 + pos + 3);
        }
        cout << ans << "\n";
    }
}