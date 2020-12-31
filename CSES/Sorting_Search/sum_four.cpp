#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
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

bool check(pair<int, int> a, pair<int, int> b) {
    if(a.fi == b.fi || a.fi == b.se)
        return false;
    if(a.se == b.fi || a.se == b.se)
        return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    bool ok = false;
    int n, x;
    cin >> n >> x;
    vector <int> ar(n);
    vector <pair<int, pair<int, int>>> st;
    For(i, 0, n) cin >> ar[i];
    For(i, 0, n) {
        For(j, i+1, n) {
            st.pb({ar[i]+ar[j], {i+1, j+1}});
        }
    }
    sort(asc(st));
    For(i, 0, st.size()) {
        int val = x - st[i].fi;
        if(val < st[0].fi) continue;
        pair <int, pair<int, int>> te = {val, {mod, mod}};
        int pos = upper_bound(asc(st), te) - st.begin();
        if(st[pos-1].fi == val && check(st[pos-1].se, st[i].se)) {
            ok = true;
            cout << st[i].se.fi << " " << st[i].se.se << " ";
            cout << st[pos-1].se.fi << " " << st[pos-1].se.se << "\n";
            break;
        }
    }
    if(!ok) cout << "IMPOSSIBLE\n";
}