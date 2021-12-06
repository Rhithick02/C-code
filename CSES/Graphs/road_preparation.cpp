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

// Variables
lli cost = 0;
vector<int> par, siz;
vector<bool> vi;
vector<vector<int>> ar;
vector <pair<int, pair<int, int>>> edge;

// Functions
void dfs(vector<vector<int>>& ar, vector<bool>& vi, int s) {
    vi[s] = true;
    for (auto it: ar[s]) {
        if (vi[it]) continue;
        dfs(ar, vi, it);
    }
}
void make_set() {
    int n = par.size();
    for (int i = 1; i < n; i++) {
        par[i] = i;
    }
}
int find_set(int a) {
    if (par[a] == a) {
        return a;
    }
    return par[a] = find_set(par[a]);
}
void union_set(int a, int b, int w) {
    a = find_set(a);
    b = find_set(b);
    // cout << par_a << " " << par_b << endl;
    if (a == b) {
        return;
    }
    cost += w;
    if (siz[a] < siz[b]) {
        swap(a, b);
    }
    siz[a] += siz[b];
    par[b] = a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    ar.resize(n+1);
    vi.resize(n+1, false);
    for (int i = 0, u, v, w; i < m; i++) {
        cin >> u >> v >> w;
        ar[u].pb(v);
        ar[v].pb(u);
        edge.pb({w, {u, v}});
    }
    dfs(ar, vi, 1);
    for (int i = 1; i <= n; i++) {
        if (vi[i] == false) {
            cout << "IMPOSSIBLE\n";
            exit(0);
        }
    }
    // Kruskal algorithm
    sort(edge.begin(), edge.end());
    par.resize(n+1, 0);
    siz.resize(n+1, 1);
    make_set();
    for (int i = 0; i < m; i++) {
        union_set(edge[i].se.fi, edge[i].se.se, edge[i].fi);
    }
    cout << cost << endl;
}