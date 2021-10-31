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

int n, m;
vector <int> ans;

bool dfs(vector <int> ar[], vector <int>& col, int s) {
    col[s] = 1;
    for(auto it: ar[s]) {
        if(col[it] == 1 || (col[it] == 0 && dfs(ar, col, it))) {
            return true;
        }
    }
    col[s] = 2;
    return false;
}
bool is_cycle(vector <int> ar[]) {
    vector <int> col(n+1, 0);
    for(int i = 1; i <= n; i++) {
        if(col[i] == 2) continue;
        if(dfs(ar, col, i)) {
            return true;
        }
    }
    return false;
}
void dfs2(vector <int> ar[], vector <bool>& vi, int s) {
    vi[s] = true;
    for(auto it: ar[s]) {
        if(vi[it]) continue;
        dfs2(ar, vi, it);
    }
    ans.pb(s);
}
void top_sort(vector <int> ar[]) {
    vector <bool> vi(n+1, false);
    for(int i = 1; i <= n; i++) {
        if(vi[i]) continue;
        dfs2(ar, vi, i);
    }
    reverse(ans.begin(), ans.end());
    for(auto it: ans) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    cin >> n >> m;
    vector <int> ar[n+1];
    for(int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        ar[u].pb(v);
    }
    if(is_cycle(ar)) {
        cout << "IMPOSSIBLE\n";
    } else {
        top_sort(ar);
    }
}