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
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
    ios::sync_with_stdio(false);
    bool ok = true;
    int n, u, v;
    cin >> n;
    vector <int> ed[n+1];
    For(i, 1, n) {
        cin >> u >> v;
        ed[u].pb(v);
        ed[v].pb(u);
    }
    For(i, 1, n+1) {
        if(ed[i].size() == 2) {
            ok = false;
            break;
        }
    }
    if(ok) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}