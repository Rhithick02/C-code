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
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, tot_univ = 0, max_size = 0;
        cin >> n;
        vector <pair<int, int>> details(n);
        for(int i = 0; i < n; i++) {
            cin >> details[i].se;
            tot_univ = max(tot_univ, details[i].se);
        }
        for(int i = 0; i < n; i++) {
            cin >> details[i].fi;
        }
        sort(des(details));
        vector <long long> univ[tot_univ + 1], ans(n+1);
        for(int i = 0; i < n; i++) {
            if(univ[details[i].se].size()) {
                univ[details[i].se].push_back(univ[details[i].se].back() + details[i].fi);
            } else {
                univ[details[i].se].push_back(details[i].fi);
            }
        }
        for(int i = 1; i <= tot_univ; i++) {
            int lim = univ[i].size();
            for(int j = 1; j <= lim; j++) {
                ans[j] += univ[i][(lim/j)*j-1];
            }
        }
        for(int i = 1; i <= n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}