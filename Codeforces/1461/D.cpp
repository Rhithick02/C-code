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

set <lli> st;
void solve(vector <lli> &ar, vector <lli> &pref, int l, int r) {
    if(l == r) {
        return;
    } else if((ar[l] + ar[r] >> 1) == ar[r]) {
        return;
    } else {
        int mid = (upper_bound(asc(ar), (ar[l] + ar[r])/2) - ar.begin()) - 1;
        solve(ar, pref, l, mid);
        st.insert(pref[mid+1] - pref[l]);
        solve(ar, pref, mid+1, r);
        st.insert(pref[r+1] - pref[mid+1]);
    }
}
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        st.clear();
        int n, q;
        lli req;
        cin >> n >> q;
        vector <lli> ar(n), pref(n+1);
        For(i, 0, n) cin >> ar[i];
        sort(asc(ar));
        For(i, 1, n+1) pref[i] = ar[i-1] + pref[i-1];
        st.insert(pref[n]);
        solve(ar, pref, 0, n-1);
        // for(auto it: st) cout << it << " ";
        For(i, 0, q) {
            cin >> req;
            if(st.find(req) != st.end()) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
}