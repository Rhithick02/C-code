#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define lli long long
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
#define INF 1ll*1e15
#define pb push_back
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
int n, m;
void dij(vector <pair<int, int>> ar[]) {
    vector <lli> dist(n+1, INF), count(n+1), mini(n+1), maxi(n+1);
    vector <bool> vi(n+1, false);
    set <pair<lli, int>> te;
    te.insert({0, 1});
    dist[1] = 0;
    count[1] = 1;
    while(te.size()) {
        pair <lli, int> cur = *te.begin();
        te.erase(te.begin());
        if(vi[cur.se]) continue;
        vi[cur.se] = true;
        for(auto it: ar[cur.se]) {
            if(dist[it.fi] > cur.fi + it.se) {
                count[it.fi] = count[cur.se];
                mini[it.fi] = mini[cur.se] + 1;
                maxi[it.fi] = maxi[cur.se] + 1;
                dist[it.fi] = cur.fi + it.se;
                te.insert({dist[it.fi], it.fi});
            } else if(dist[it.fi] == cur.fi + it.se) {
                count[it.fi] = (count[it.fi] + count[cur.se]) % mod;
                mini[it.fi] = min(mini[it.fi], mini[cur.se] + 1);
                maxi[it.fi] = max(maxi[it.fi], maxi[cur.se] + 1);
            }
        }
    }
    cout << dist[n] << " " << count[n] << " " << mini[n] << " " << maxi[n] << endl;
}
int main() {
    cin >> n >> m;
    vector <pair<int, int>> ar[n+1];
    for(int i = 0, u, v, w; i < m; i++) {
        cin >> u >> v >> w;
        ar[u].pb({v, w});
    }
    dij(ar);
}