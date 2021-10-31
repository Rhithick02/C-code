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
vector <int> top_sort;
void topsort(vector <int> ar[], vector <bool>& vi, int s) {
    vi[s] = true;
    for(auto it: ar[s]) {
        if(vi[it]) continue;
        topsort(ar, vi, it);
    }
    top_sort.pb(s);
}
void solve(vector <int> ar[]) {
    vector <bool> vi(n+1, false);
    vector <int> d(n+1, -mod);
    vector <int> parent(n+1, -1);
    topsort(ar, vi, 1);
    reverse(top_sort.begin(), top_sort.end());
    d[1] = 1;
    for(auto it: top_sort) {
        for(auto ti: ar[it]) {
            if(d[ti] < d[it] + 1) {
                d[ti] = d[it] + 1;
                parent[ti] = it;
            }
        }
    }    
    if(d[n] == -mod) {
        cout << "IMPOSSIBLE\n";
    } else {
        cout << d[n] << endl;
        int node = n;
        vector <int> res;
        while(node != -1) {
            res.pb(node);
            node = parent[node];
        }
        reverse(res.begin(), res.end());
        for(auto it: res) {
            cout << it << " ";
        }
    }
}

int main() {
    cin >> n >> m;
    vector <int> ar[n+1];
    for(int i = 0, u, v; i < m; i++) {
        cin >> u >> v;
        ar[u].pb(v);
    }
    solve(ar);
}