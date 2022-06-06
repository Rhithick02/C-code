#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 1e15
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int solve(vector <int>& ar, int x) {
    int dif = 2e9, idx = -1;
    for (int i = 0; i < ar.size(); i++) {
        if (dif > abs(ar[i] - x)) {
            dif = abs(ar[i] - x);
            idx = i;
        }
    }
    return idx;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector <int> row_11{0, solve(b, a[0]), n-1}, row_1n{0, solve(b, a[n-1]), n-1};
        lli cost = MAX;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                lli temp = abs(b[row_11[i]]-a[0]) + abs(b[row_1n[j]]-a[n-1]);
                if (i && j) {
                    temp += abs(b[0] - a[solve(a, b[0])]);
                }
                if (row_11[i] != n-1 && row_1n[j] != n-1) {
                    temp += abs(b[n-1] - a[solve(a, b[n-1])]);
                }
                cost = min(cost, temp);
            }
        }
        cout << cost << "\n";
    }
}