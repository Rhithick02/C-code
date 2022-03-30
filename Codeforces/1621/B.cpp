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
        int n, min_l = INT_MAX, max_r = INT_MIN, cost = INT_MAX;
        cin >> n;
        set<pair<pair<int, int>, int>> start, finish;
        for (int i = 0, l, r, c; i < n; i++) {
            bool ok = false;
            cin >> l >> r >> c;
            min_l = min(min_l, l);
            max_r = max(max_r, r);
            if (min_l == l && max_r == r) {
                cost = min(cost, c);
                ok = true;
            }
            start.insert({{l, c},i});
            finish.insert({{r, -c}, i});
            if (ok) {
                cost = min(cost, (start.begin() -> first).second - (finish.rbegin() -> first).second);
            } else {
                cost = (start.begin() -> first).second - (finish.rbegin() -> first).second;
            }
            cout << cost << endl;
        }
    }
}