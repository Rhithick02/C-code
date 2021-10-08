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
    int n, m, fl = 1, dist = 0;
    cin >> n >> m;
    vector <int> ar[n+1], parent(n+1);
    vector <bool> vi(n+1, false);
    for(int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        ar[u].pb(v);
        ar[v].pb(u);
    }
    queue <int> q;
    q.push(1), vi[1] = true;
    parent[1] = -1;
    while(!q.empty() && fl) {
        int temp = q.size();
        dist++;
        while(temp-- && fl) {
            int cur = q.front();
            q.pop();
            for(auto it : ar[cur]) {
                if(vi[it]) continue;
                q.push(it), vi[it] = true;
                parent[it] = cur;
                if(it == n) {
                    fl = 0;
                    break;
                }
            }
        }
    }
    if(fl) {
        cout << "IMPOSSIBLE\n";
    } else {
        cout << dist + 1 << endl;
        int node = n;
        vector <int> ans;
        while(node != -1) {
            ans.pb(node);
            node = parent[node];
        }
        reverse(ans.begin(), ans.end());
        for(auto it: ans) {
            cout << it << " ";
        }
    }
    
}