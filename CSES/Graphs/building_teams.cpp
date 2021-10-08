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

int main() {
    int n, m, fl = 1;
    cin >> n >> m;
    vector <int> ar[n+1], col(n+1, -1);
    for(int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        ar[u].pb(v);
        ar[v].pb(u);
    }
    queue <int> q;
    for(int i = 1; i <= n; i++) {
        if(col[i] != -1) continue;
        q.push(i), col[i] = 0;
        while(!q.empty() && fl) {
            int cur = q.front();
            q.pop();
            for(auto it: ar[cur]) {
                if(col[it] == (col[cur]^1)) continue;
                else if(col[it] != -1 && col[it] == col[cur]) {
                    fl = 0;
                    break;
                } else {
                    q.push(it), col[it] = col[cur]^1;
                }
            }
        }
        if(!fl) break;
    }
    if(!fl) {
        cout << "IMPOSSIBLE\n";
    } else {
        for(int i = 1; i <= n; i++) {
            cout << col[i]+1 << " ";
        }
    }
}