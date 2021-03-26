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

int main() {
    ios::sync_with_stdio(false);
    int t, T;
    cin >> t;
    T = t;
    while(t--) {
        int n, x, ans = 1e9;
        cin >> n;
        vector <int> ar, cost, ar2d[n];
        For(i, 0, n * n) {
            cin >> x;
            ar.pb(x);
        }
        For(i, 0, n * n) {
            cin >> x;
            cost.pb(x);
        }
        For(i, 0, 2 * n) cin >> x;
        if(n == 1) {
            ans = 0;
            goto last;
        } else if(n == 2) {
            ans = *min_element(asc(cost));
            goto last;
        }
        For(i, 0, 1 << (n * n)) {
            int temp = 0, te = i, cnt = 0;
            vector <int> st = ar;
            For(j, 0, n * n) {
                if(te & 1) {
                    temp += cost[j];
                    st
                }
                te /= 2;
            }
        }
    last:
        cout << "Case #" << T-t << ": " << abs(k - cnt) << "\n";
    }
}