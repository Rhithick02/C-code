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
        int n, k;
        cin >> n >> k;
        if (k == 3 && k+1 == n) {
            cout << "-1\n";
            continue;
        }
        vector<bool> check(n);
        vector<pair<int, int>> ans;
        if (k == n-1) {
            ans.push_back({n-1, n-2});
            check[n-1] = check[n-2] = true;
            ans.push_back({1, 3});
            check[1] = check[3] = true;
            ans.push_back({0, n-1-3});
            check[0] = check[n-1-3] = true;
            for (int i = 1; i < n/2; i++) {
                if (!check[i] && !check[n-1-i]) {
                    ans.push_back({i, n-1-i});
                }
            }
        } else {
            ans.push_back({k, n-1});
            check[k] = check[n-1] = true;
            for (int i = 1; i < n / 2; i++) {
                if (!check[i] && !check[n-1-i]) {
                    ans.push_back({i, n-1-i});
                } else if (!check[i]) {
                    ans.push_back({0, i});
                } else if (!check[n-1-i]) {
                    ans.push_back({0, n-1-i});
                }
            }
        }
        for (auto it : ans) {
            cout << it.fi << " " << it.se << "\n";
        }
    }
}