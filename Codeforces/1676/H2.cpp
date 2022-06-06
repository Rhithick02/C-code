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

lli merge(vector <int>& ar, int l, int mid, int r) {
    vector <int> left, right;
    for (int i = l; i <= mid; i++) {
        left.pb(ar[i]);
    }
    for (int i = mid+1; i <= r; i++) {
        right.pb(ar[i]);
    }
    int i = 0, j = 0, k = l;
    lli count = 0;
    int n1 = left.size(), n2 = right.size();
    while (i < n1 && j < n2) {
        if (left[i] < right[j]) {
            ar[k++] = left[i++];
        } else {
            ar[k++] = right[j++];
            count += n1 - i;
        }
    }
    while (i < n1) {
        ar[k++] = left[i++];
    }
    while (j < n2) {
        ar[k++] = right[j++];
    }
    return count;
}
lli merge_sort(vector <int>& ar, int l, int r) {
    if (l >= r) {
        return 0;
    }
    int mid = (l + r) / 2;
    lli inv_count = 0;
    inv_count += merge_sort(ar, l, mid);
    inv_count += merge_sort(ar, mid+1, r);
    inv_count += merge(ar, l, mid, r);
    return inv_count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> ar(n);
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        cout << merge_sort(ar, 0, n-1) << "\n";
    }
}