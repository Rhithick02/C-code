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
    int n, m;
    cin >> n >> m;
    vector <pair <int, int>> ar[n+1];
    vector <lli> dist(n+1, 1ll*1000000*mod);
    vector <bool> vi(n+1);
    set <pair<lli, int>> te;
    for(int i = 0, u, v, w; i < m; i++) {
        cin >> u >> v >> w;
        ar[u].pb({v, w});
    }
    te.insert({0, 1});
    dist[1] = 0;
    while(te.size()) {
        pair <lli, int> cur = *te.begin();
        te.erase(te.begin());
        if(vi[cur.se]) continue;
        vi[cur.se] = true;
        for(auto it: ar[cur.se]) {
            if(dist[it.fi] > cur.fi + it.se) {
                dist[it.fi] = cur.fi + it.se;
                te.insert({dist[it.fi], it.fi});
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << dist[i] << " ";
    }
}