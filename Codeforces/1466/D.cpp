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

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli sum = 0;
        int n, u, v, k = 2;
        cin >> n;
        deque <pair<int, int>> weight(n);
        vector <int> ar[n+1];
        vector <lli> ans(n);
        For(i, 0, n) {
            cin >> weight[i].fi;
            weight[i].se = i+1;
            sum += weight[i].fi;
        }
        For(i, 1, n) {
            cin >> u >> v;
            ar[u].pb(v);
            ar[v].pb(u);
        }
        sort(des(weight));
        ans[1] = sum;
        while(k < n) {
            int si = ar[weight[0].se].size();
            while(si > 1) {
                sum += weight[0].fi;
                ans[k++] = sum;
                si--;
            }
            weight.pop_front();
        }
        For(i, 1, n) cout << ans[i] << " ";
        cout << "\n";
    }
}