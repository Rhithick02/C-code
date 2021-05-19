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
    int n, m, u, v, w;
    cin >> n >> m;
    vector <pair<int, int>> ar[n+1];
    vector <int> dist(n+1);
    vector <bool> processed(n+1);
    set <pair<int, int>> te;
    for(int i = 0; i <= n; i++) {
        dist[i] = mod;
    }
    for(int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        ar[u].pb({v, w});
        ar[v].pb({u, w});
    }
    int s = 1;
    dist[s] = 0;
    te.insert({0, s});
    for(int i = 0; i < n; i++) {
        pair <int, int> node = *te.begin();
        te.erase(te.begin());
        if(processed[node.se]) continue;
        processed[node.se] = true;
        for(auto it: ar[node.se]) {
            if(dist[it.fi] > it.se + node.fi) {
                dist[it.fi] = it.se + node.fi;
                te.insert({dist[it.fi], it.fi});
            }
        }
    }
    for(int i = 1; i <= n; i++)
        cout << dist[i] << " ";
}