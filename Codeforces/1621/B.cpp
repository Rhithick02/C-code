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
        int n;
        cin >> n;
        set <pair<pair<int, int>, int>> start, finish;
        map <pair<int, int>, set<int>> mp;
        for (int i = 0, l, r, c; i < n; i++) {
            cin >> l >> r >> c;
            mp[{l, r}].insert(c);
            start.insert({{l, c}, i});
            finish.insert({{r, -c}, i});
            int L = (start.begin()->first).first;
            int Lc = (start.begin()->first).second;
            int R = (finish.rbegin()->first).first;
            int Rc = (finish.rbegin()->first).second;
            if (mp[{L, R}].size() != 0) {
                cout << min(*mp[{L, R}].begin(), Lc-Rc);
            } else {
                cout << Lc-Rc;
            }
            cout << "\n";
        }
    }
}