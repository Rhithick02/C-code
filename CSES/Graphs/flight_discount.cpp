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
int n, m;
vector <lli> solve(vector <pair<int,int>> ar[], int s) {
    set <pair<lli, int>> te;
    vector <lli> distance(n+1, INF);
    vector <bool> processed(n+1, false);
    te.insert({0ll, s});
    distance[s] = 0;
    for(int i = 0; i < n && te.size();) {
        pair <lli, int> cur = *te.begin();
        te.erase(te.begin());
        if(processed[cur.se]) {
            continue;
        }
        processed[cur.se] = true;
        i++;
        for(auto it: ar[cur.se]) {
            if(distance[it.fi] > distance[cur.se] + it.se) {
                distance[it.fi] = distance[cur.se] + it.se;
                te.insert({distance[it.fi], it.fi});
            }
        }
    }
    return distance;
}
void reverse(vector <pair<int, int>> ar[], vector <pair<int, int>> arr[]) {
    for(int i = 1; i <= n; i++) {
        for(auto it: ar[i]) {
            arr[it.fi].pb({i, it.se});
        }
    }
}
int main() {
    cin >> n >> m;
    vector <pair<int, int>> ar[n+1];
    for(int i = 0, u, v, w; i < m; i++) {
        cin >> u >> v >> w;
        ar[u].pb({v, w});
    }
    vector <lli> forw_dist = solve(ar, 1);
    vector <pair<int, int>> arr[n+1];
    reverse(ar, arr);
    vector <lli> reve_dist = solve(arr, n);
    lli sum = forw_dist[n];
    for(int i = 1; i <= n; i++) {
        for(auto it: ar[i]) {
            if(forw_dist[i] != INF && reve_dist[it.fi] != INF) {
                sum = min(sum, forw_dist[i] + reve_dist[it.fi] + it.se/2);
            }
        }
    }
    cout << sum << endl;
}