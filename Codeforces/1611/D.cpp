#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, root;
        cin >> n;
        vector <int> ar[n], w(n), p(n), par(n), d(n);
        for (int i = 0; i < n; i++) {
            cin >> par[i];
            par[i]--;
            if (i == par[i]) {
                root = par[i];
                continue;
            }
            ar[par[i]].pb(i);
            ar[i].pb(par[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            p[i]--;
        }
        int k = 1, fl = 1, cur_wei = 0;
        set <int> te;
        for (auto it : ar[root]) {
            te.insert(it);
        }
        while (te.size()) {
            if (te.find(p[k]) == te.end()) {
                fl = 0;
                break;
            }
            int cur = p[k++];
            cur_wei++;
            w[cur] = cur_wei - d[par[cur]];
            d[cur] = d[par[cur]] + w[cur];
            te.erase(cur);
            for (auto it : ar[cur]) {
                if (it != par[cur]) {
                    te.insert(it);
                }
            }
        }
        if (!fl) {
            cout << "-1";
        } else {
            for (auto it : w) {
                cout << it << " ";
            }
        }
        cout << "\n";
    }
}