#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define lli long long
#define For(i,a,n) for(int i=(a);i<n;i++)
#define asc(x) x.begin(),x.end()
#define des(x) x.rbegin(),x.rend()
#define pb push_back
#define fi first
#define se second
#define MAX 100001
int n, u, v, leaf;
vector <int> ar[MAX], child(MAX), st(MAX);
int dfs(int cur, int p = 0) {
    for(auto it: ar[cur]) {
        if(it == p) continue;
        child[cur] += dfs(it, cur);
    }
    return child[cur] + 1;
}
void dfs2(int cur, int p = 0) {
    for(auto it: ar[cur]) {
        if(it == p) continue;
        st[cur] = max(st[cur], max(child[it] + 1, n - child[cur] - 1));
        dfs2(it, cur);
    }
    if(ar[cur].size() == 1)
        leaf = cur;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        For(i, 1, n + 1) {
            ar[i].clear();
            child[i] = 0;
            st[i] = 0;
        }
        For(i, 0, n - 1) {
            cin >> u >> v;
            ar[u].pb(v);
            ar[v].pb(u);
        }
        dfs(1);
        dfs2(1);
        For(i, 0, n + 1) if(!st[i]) st[i] = MAX;
        int mini = *min_element(st.begin(), st.begin() + n + 1);
        vector <int> te;
        For(i, 1, n + 1) if(st[i] == mini) te.pb(i);
        if(te.size() == 1) {
            cout << "1 " << ar[1][0] << "\n";
            cout << "1 " << ar[1][0] << "\n";
        }
        else {
            dfs2(te[0], te[1]);
            cout << ar[leaf][0] << " " << leaf << "\n";
            cout << te[1] << " " << leaf << "\n";
        }
    }
}