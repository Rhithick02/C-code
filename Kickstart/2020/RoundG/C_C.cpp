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
    int t, T;
    cin >> t;
    T = t;
    while(t--) {
        lli w, n, res = 2e18, ref = 0;
        cin >> w >> n;
        map <lli, lli> mp;
        vector <lli> ar(w), st;
        For(i, 0, w) {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        for(auto it: mp) ref = max(ref, it.se);
        for(auto it: mp) {
            if(it.se == ref) st.pb(it.fi);
        }
        int size = st.size();
        int lb = size / 2, rb = size / 2 + 1;
        For(i, lb, min(size, rb+1)) {
            lli temp = 0;
            For(j, 0, w) {
                lli te = abs(ar[j]-st[i]);
                temp += min(te, n-te);
            }
            res = min(res, temp);
        }
        cout << "Case #" << T - t << ": " << res << "\n";
    }
}