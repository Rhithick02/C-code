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
void dfs(vector <int> ar[], vector <bool>& vi, int s, int p = 0) {
    vi[s] = true;
    ans.pb(s);
    for(auto it: ar[s]) {
        if(it == p) continue;
        if(vi[it]) {
            ans.pb(it);
            fl = 1;
            return;
        }
        dfs(ar, vi, it, s);
        if(fl) return;
    }
    ans.pop_back();
}

int main() {
    int n, m;
    cin >> n >> m;
    vector <int> ar[n+1];
    vector <bool> vi(n+1);
    for(int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        ar[u].pb(v);
        ar[v].pb(u);
    }
    for(int i = 1; i <= n; i++) {
        if(vi[i]) continue;
        dfs(ar, vi, i);
        if(fl) break;
    }
    if(!fl) {
        cout << "IMPOSSIBLE\n";
    } else {
        int si = ans.size(), cnt = 0;
        vector <int> temp;
        for(int i = si-1; i >= 0; i--) {
            cnt++;
            temp.pb(ans[i]);
            if(ans[i] == ans[si-1] && i != si - 1) {
                break;
            }
        }
        reverse(temp.begin(), temp.end());
        cout << cnt << endl;
        for(auto it: temp) cout << it << " ";
    }
}