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

lli build(vector <int>& ar, vector <lli>& seg, int idx, int l, int r) {
    if(l == r) {
        return seg[idx] = ar[l];
    }
    int mid = (l + r) / 2;
    seg[idx] = build(ar, seg, 2*idx+1, l, mid) + build(ar, seg, 2*idx+2, mid+1, r);
    return seg[idx];
}
lli find_sum(vector <lli>& seg, int idx, int _l, int _r, int l, int r) {
    if(l <= _l && r >= _r) {
        return seg[idx];
    } else if(l > _r || r < _l) {
        return 0;
    } else {
        int mid = (_l + _r) / 2;
        return find_sum(seg, 2*idx+1, _l, mid, l, r) + find_sum(seg, 2*idx+2, mid+1, _r, l, r);
    }
}
void update(vector <lli>& seg, int idx, int l, int r, int pos, int dif) {
    if(pos >= l && pos <= r) {
        seg[idx] += dif;
    }
    if(pos < l || pos > r || l == r) {
        return;
    }
    int mid = (l + r) / 2;
    update(seg, 2*idx+1, l, mid, pos, dif);
    update(seg, 2*idx+2, mid+1, r, pos, dif);
}
int main() {
    int n, q;
    cin >> n >> q;
    vector <int> ar(n);
    vector <lli> seg(4*n);
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    build(ar, seg, 0, 0, n-1);
    for(int i = 0, x, k, u; i < q; i++) {
        cin >> x >> k >> u;
        if(x == 1) {
            update(seg, 0, 0, n-1, k-1, u - ar[k-1]);
            ar[k-1] = u;
        } else {
            cout << find_sum(seg, 0, 0, n-1, k-1, u-1) << "\n";
        }
    }
}