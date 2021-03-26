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

bool isvalid(int x, int y, int r, int c) {
    return x < r && x >= 0 && y < c && y >= 0;
}
int main() {
    ios::sync_with_stdio(false);
    int t, T;
    cin >> t;
    T = t;
    while(t--) {
        int r, c, xx;
        cin >> r >> c;
        vector <int> ar[r];
        set <pair<int, pair<int, int>>> te;
        For(i, 0, r) {
            For(j, 0, c) {
                cin >> xx;
                ar[i].pb(xx);
                te.insert({xx, {i, j}});
            }
        }
        int maxi = (*te.rbegin()).fi, mini = (*te.begin()).fi;
        lli cnt = 0;
        while(maxi - mini > 1) {
            pair <int, pair<int, int>> pa = *te.rbegin();
            te.erase(prev(te.end()));
            pair <int, int> adj[4];
            adj[0] = {pa.se.fi + 1, pa.se.se};
            adj[1] = {pa.se.fi, pa.se.se + 1};
            adj[2] = {pa.se.fi - 1, pa.se.se};
            adj[3] = {pa.se.fi, pa.se.se - 1};
            for(int i = 0; i < 4; i++) {
                int x = adj[i].fi, y = adj[i].se;
                if(isvalid(x, y, r, c)) {
                    if(pa.fi - ar[x][y] <= 1) continue;
                    cnt += pa.fi - 1 - ar[x][y];
                    te.erase({ar[x][y], {x, y}});
                    te.insert({pa.fi - 1, {x, y}});
                    ar[x][y] = pa.fi - 1;
                }
            }
            maxi = (*te.rbegin()).fi;
            mini = (*te.begin()).fi;
        }
        cout << "Case #" << T-t << ": " << cnt << "\n";
    }
}