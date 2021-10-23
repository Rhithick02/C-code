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
#define INF 1ll*1e16
typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
int n, m, k;
vector <vector <lli>> solve(vector <pair<int,int>> ar[], int s) {
    multiset <pair<lli, int>> te;
    vector <vector <lli>> distance(n+1, vector<lli> (k, INF));
    te.insert({0ll, s});
    distance[s][0] = 0;
    while(te.size()) {
        pair <lli, int> cur = *te.begin();
        te.erase(te.begin());
        if(distance[cur.se][k-1] < cur.fi) continue;
        for(auto it: ar[cur.se]) {
            if(distance[it.fi][k-1] > cur.fi + it.se) {
                distance[it.fi][k-1] = cur.fi + it.se;
                te.insert({distance[it.fi][k-1], it.fi});
                sort(distance[it.fi].begin(), distance[it.fi].end());
            }
        }
    }
    return distance;
}

int main() {
    cin >> n >> m >> k;
    vector <pair<int, int>> ar[n+1];
    for(int i = 0, u, v, w; i < m; i++) {
        cin >> u >> v >> w;
        ar[u].pb({v, w});
    }
    vector <vector <lli>> distance = solve(ar, 1);
    // for(int i = 1; i <= n; i++) {
    //     for(int j = 0; j < k; j++) {
    //         cout << distance[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for(int i = 0; i < k; i++) {
        cout << distance[n][i] << " ";
    }
}