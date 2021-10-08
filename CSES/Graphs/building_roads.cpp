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

void dfs(vector <int> ar[], vector <bool>& vi, int s) {
    vi[s] = true;
    for(auto it: ar[s]) {
        if(vi[it]) continue;
        dfs(ar, vi, it);
    }
}
int main() {
    int n, m, prev = 0;
    cin >> n >> m;
    vector <int> ar[n+1], ans;
    vector <bool> vi(n+1);
    for(int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        ar[u].pb(v);
        ar[v].pb(u);
    }
    for(int i = 1; i <= n; i++) {
        if(vi[i]) continue;
        ans.pb(i);
        dfs(ar, vi, i);
    }
    cout << ans.size() - 1 << endl;
    for(int i = 1; i < ans.size(); i++) {
        cout << ans[i-1] << " " << ans[i] << "\n";
    }
}