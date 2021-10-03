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
    int n;
    cin >> n;
    vector <pair <pair <int, int>, int>> ar(n);
    vector <lli> money(n+1);
    for(int i = 0, u, v, w; i < n; i++) {
        cin >> u >> v >> w;
        ar[i] = {{v, u}, w};
    }
    sort(ar.begin(), ar.end());
    money[1] = ar[0].se;
    for(int i = 1; i < n; i++) {
        pair <pair <int, int>, int> temp = {{ar[i].fi.se-1, mod}, mod};
        int pos = upper_bound(ar.begin(), ar.end(), temp) - ar.begin();
        money[i+1] = max(money[i], money[pos] + ar[i].se);
    }
    cout << money[n] << endl;
}