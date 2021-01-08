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
        lli res = 0;
        int n, u, v;
        cin >> n;
        vector <set<int>> ar(n+1);
        vector <int> cnt(n+1, 1);
        queue <int> st;
        For(i, 0, n) {
            cin >> u >> v;
            ar[u].insert(v);
            ar[v].insert(u);
        }
        For(i, 1, n+1) {
            if(ar[i].size() == 1)
                st.push(i);
        }
        while(!st.empty()) {
            int cur = st.front(), too = *ar[cur].begin();
            st.pop();
            cnt[too] += cnt[cur];
            cnt[cur] = 0;
            ar[too].erase(cur);
            if(ar[too].size() == 1)
                st.push(too);
        }
        For(i, 1, n+1) {
            res += 1ll * cnt[i] * (cnt[i]-1) / 2;
            res += 1ll * cnt[i] * (n-cnt[i]);
        }
        cout << res << "\n";
    }
}