#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
#define NINF -1e17
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <int> ar(n);
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        int res = ar[0];
        for(int i = 1; i < n; i++) {
            res = max(res, ar[i] - ar[i-1]);
        }
        cout << res << endl;
    }
}