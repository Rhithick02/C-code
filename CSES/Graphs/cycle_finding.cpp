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
#define INF 1ll*1e15
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int n, m, x;
int main() {
    cin >> n >> m;
    vector <pair <pair<int, int>,int>> edges;
    vector <lli> distance(n+1, INF);
    vector <int> parent(n+1, -1);
    for(int i = 0, u, v, w; i < m; i++) {
        cin >> u >> v >> w;
        edges.pb({{u, v}, w});
    }
    distance[1] = 0;
    for(int i = 0; i < n; i++) {
        x = -1;
        for(int j = 0; j < m; j++) {
            if(distance[edges[j].fi.se] > distance[edges[j].fi.fi] + edges[j].se) {
                distance[edges[j].fi.se] = distance[edges[j].fi.fi] + edges[j].se;
                parent[edges[j].fi.se] = edges[j].fi.fi;
                x = edges[j].fi.se;
            }
        }
    }
    if(x == -1) {
        cout << "NO\n";
        exit(0);
    }
    for(int i = 0; i < n; i++) {
        x = parent[x];
    }
    vector <int> path;
    for(int cur = x; ; cur = parent[cur]) {
        path.pb(cur);
        if(cur == x && path.size() > 1) {
            break;
        }
    }
    reverse(path.begin(), path.end());
    cout << "YES\n";
    for(auto it: path) {
        cout << it << " ";
    }
}