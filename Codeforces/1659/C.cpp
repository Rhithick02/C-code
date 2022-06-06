#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX (lli)1e16
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        lli n, a, b, cost = MAX;
        cin >> n >> a >> b;
        vector <int> ar(n+1);
        vector <lli> pref(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> ar[i];
            pref[i] = pref[i-1] + ar[i];
        }
        for (int i = 0; i < n; i++) {
            cost = min(cost, (a+b)*ar[i] + b*(pref[n]-pref[i]-(n-i)*ar[i]));
        }
        cout << cost << "\n";
    }
}