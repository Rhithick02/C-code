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

void dfs(vector <int> ar[], int s, vector <bool> &vis) {
    cout << s << " ";
    vis[s] = true;
    for(auto it: ar[s]) {
        if(!vis[it]) {
            dfs(ar, it, vis);
        }
    }
}
int main() {
    int n, m, u, v;
    cin >> n >> m;
    vector <int> ar[n+1];
    vector <bool> vis(n+1);
    for(int i = 0; i < m; i++) {
        cin >> u >> v;
        ar[u].pb(v);
        ar[v].pb(u);
    }
    dfs(ar, 1, vis);
}