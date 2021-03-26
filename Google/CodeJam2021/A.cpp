#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int find_min(vector <int> &ar, int l) {
    return min_element(ar.begin() + l, ar.end()) - ar.begin();
}
int main() {
    ios::sync_with_stdio(false);
    int t, T;
    cin >> t;
    T = t;
    while(t--) {
        int n, r, cost = 0;
        cin >> n;
        vector <int> ar(n);
        For(i, 0, n) cin >> ar[i];
        For(i, 0, n-1) {
            int to_index = find_min(ar, i) + 1;
            reverse(ar.begin() + i, ar.begin() + to_index);
            cost += to_index - i;
        }
        cout << "Case #" << T - t << ": " << cost << "\n";
    }
}