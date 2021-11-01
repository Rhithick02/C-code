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

int build(vector <int>& ar, vector <int>& seg, int idx, int l, int r) {
    if(l == r) {
        return seg[idx] = ar[l];
    }
    int mid = (l + r) / 2;
    seg[idx] = min(build(ar, seg, 2*idx+1, l, mid), build(ar, seg, 2*idx+2, mid+1, r));
    return seg[idx];
}
int find_min(vector <int>& seg, int idx, int _l, int _r, int l, int r) {
    if(l <= _l && r >= _r) {
        return seg[idx];
    } else if(l > _r || r < _l) {
        return mod;
    } else {
        int mid = (_l + _r) / 2;
        return min(find_min(seg, 2*idx+1, _l, mid, l, r), find_min(seg, 2*idx+2, mid+1, _r, l, r));
    }
}
int main() {
    int n, q;
    cin >> n >> q;
    vector <int> ar(n), seg(4*n);
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    build(ar, seg, 0, 0, n-1);
    for(int i = 0, l, r; i < q; i++) {
        cin >> l >> r;
        cout << find_min(seg, 0, 0, n-1, l-1, r-1) << "\n";
    }
}