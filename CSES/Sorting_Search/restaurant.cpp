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
    int n, l, r;
    cin >> n;
    vector <int> ar, pref(2*n+5);
    vector <pair<int, int>> st;
    For(i, 0, n) {
        cin >> l >> r;
        st.pb({l, r});
        ar.pb(l), ar.pb(r+1);
    }
    sort(asc(ar));
    ar.resize(unique(asc(ar)) - ar.begin());
    for(auto it: st) {
        l = lower_bound(asc(ar), it.fi) - ar.begin();
        r = lower_bound(asc(ar), it.se+1) - ar.begin();
        pref[l]++;
        pref[r]--;
    }
    For(i, 1, 2*n+5) pref[i] += pref[i-1];
    cout << *max_element(asc(pref)) << "\n";
}