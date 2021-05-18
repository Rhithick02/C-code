#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define MAX 100001
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    int n, m, u, v, root;
    cin >> n >> m;
    vector <int> ar[n+1];
    vector <bool> vis(n+1);
    for(int i = 0; i < m; i++) {
        cin >> u >> v;
        ar[u].pb(v);
        ar[v].pb(u);    //Undirected Graph
    }
    // BFS
    root = 1;
    vis[root] = true;
    queue <int> q;
    q.push(root);
    while(!q.empty()) {
        int cur = q.front();
        vis[cur] = true;
        cout << cur << " ";
        q.pop();
        for(auto it: ar[cur]) {
            if(vis[it]) continue;
            q.push(it);
            vis[it] = true;
        }
    }
}