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
    int n, m, res = -mod;
    string s, t;
    cin >> n >> m >> s >> t;
    vector <int> s_alp[26], small(m), large(m), cnt(26);
    For(i, 0, n) s_alp[s[i]-'a'].pb(i);
    int st = -1;
    For(i, 0, m) {
        small[i] = *upper_bound(asc(s_alp[t[i]-'a']), st);
        st = small[i];
    }
    st = n;
    for(int i = m-1; i >= 0; i--) {
        large[i] = lower_bound(asc(s_alp[t[i]-'a']), st) - s_alp[t[i]-'a'].begin() - 1;
        large[i] = s_alp[t[i]-'a'][large[i]];
        st = large[i];
    }
    For(i, 0, m-1) {
        res = max(res, large[i+1] - small[i]);
    }
    cout << res << "\n";
}