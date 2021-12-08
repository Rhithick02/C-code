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

vector<bool> vi;
vector<int> ord;
vector<vector<int>> ar, ra, scc;

void topsort(int s) {
    vi[s] = true;
    for (auto it: ar[s]) {
        if (vi[it]) continue;
        topsort(it);
    }
    ord.pb(s);
}

void dfs(int s, vector<int>& temp, int p = 0) {
    vi[s] = true;
    for (auto it : (p == 0 ? ra[s] : ar[s])) {
        if (vi[it]) continue;
        dfs(it, temp, p);
    }
    temp.pb(s);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    ar.resize(n+1);
    ra.resize(n+1);
    vi.resize(n+1);
    for (int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        ar[u].pb(v);
        ra[v].pb(u);
    }
    for (int i = 1; i <= n; i++) {
        if (vi[i]) continue;
        topsort(i);
    }
    vi.assign(n+1, false);
    while (!ord.empty()) {
        if (!vi[ord.back()]) {
            vector<int> temp;
            dfs(ord.back(), temp);
            scc.pb(temp);
        }
        ord.pop_back();
    }
    if (scc.size() == 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
        int node1 = scc[0][0], node2 = scc[1][0], fl = 0;
        vector <int> path;
        vi.assign(n+1, false);
        for (auto it: ar[node1]) {
            if (vi[it]) continue;
            dfs(it, path, 1);
        }
        for (auto it: path) {
            if (it == node2) {
                fl = 1;
                break;
            }
        }
        if (fl) {
            cout << node2 << " " << node1 << "\n";
        } else  {
            cout << node1 << " " << node2 << "\n";
        }
    }
}