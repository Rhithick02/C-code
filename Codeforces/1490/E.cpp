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

bool can(int mid, vector <pair<int, int>> ar, vector <lli> pref) {
    int n = ar.size();
    lli sum = pref[n-mid];
    for(int i = n-mid; i < n-1; i++) {
        if(sum >= 1ll * ar[i+1].fi) {
            sum += ar[i+1].fi;
        } else {
            return false;
        }
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n, ans = 0;
        cin >> n;
        vector <pair<int, int>> ar(n);
        vector <lli> pref(n);
        set <int> te;
        For(i, 0, n) {
            cin >> ar[i].fi;
            ar[i].se = i;
        }
        sort(asc(ar));
        pref[0] = ar[0].fi;
        For(i, 1, n) pref[i] = pref[i-1] + ar[i].fi;
        int low = 0, high = n, mid;
        while(low <= high) {
            mid = low + high >> 1;
            if(can(mid, ar, pref)) {
                low = mid + 1;
                ans = max(ans, mid);
            } else {
                high = mid - 1;
            }
        }
        cout << ans << "\n";
        for(int i = n-ans; i < n; i++) {
            te.insert(ar[i].se+1);
        }
        for(auto it: te) cout << it << " ";
        cout << "\n";
    }
}