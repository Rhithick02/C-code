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
    int n, q;
    cin >> n >> q;
    vector <lli> ar(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> ar[i];
        ar[i] += ar[i-1];
    }
    for(int i = 0, l, r; i < q; i++) {
        cin >> l >> r;
        cout << ar[r] - ar[l-1] << "\n";
    }
}