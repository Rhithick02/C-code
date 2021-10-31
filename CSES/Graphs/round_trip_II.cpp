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

int fl = 0;
vector <int> ans;
void dfs(vector <int> ar[], vector <int>& col, int s) {
    col[s] = 1;
    ans.pb(s);
    for(auto it: ar[s]) {
        if(col[it] == 2) continue;
        if(col[it] == 0) {
            dfs(ar,col, it);
        } else {
            ans.pb(it);
            fl = 1; return;
        }
        if(fl) return;
    }
    col[s] = 2;
    ans.pop_back();
}
int main() {
    int n, m;
    cin >> n >> m;
    vector <int> ar[n+1], col(n+1, 0);
    for(int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        ar[u].pb(v);
    }
    for(int i = 1; i <= n; i++) {
        if(col[i] == 2) continue;
        dfs(ar, col, i);
        if(fl) break;
    }
    if(!fl) {
        cout << "IMPOSSIBLE\n";
    } else {
        int si = ans.size(), ok = 0;
        vector <int> temp;
        for(int i = 0; i < si; i++) {
            if(ok) {
                temp.pb(ans[i]);
            } else if(ans[si-1] == ans[i]) {
                ok = 1;
                temp.pb(ans[i]);
            }
        }
        cout << temp.size() << endl;
        for(auto it: temp) {
            cout << it << " ";
        }
        cout << endl;
    }
}