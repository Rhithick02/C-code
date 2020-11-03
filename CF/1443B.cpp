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
        int a, b, n, cnt = 0, pos = 0, res = 0;
        string s;
        cin >> a >> b >> s;
        vector <pair<int, int>> st;
        n = s.length();
        For(i, 0, n) {
            if(!cnt && s[i] == '1') {
                pos = i;
                cnt++;
            } else if(s[i] == '1') {
                cnt++;
            } else {
                if(cnt) st.pb({pos, cnt});
                cnt = 0;
            }
        }
        if(cnt) st.pb({pos, cnt});
        n = st.size();
        res += n * a;
        For(i, 1, n) {
            int te = (st[i].fi-st[i-1].fi-st[i-1].se) * b;
            if(te <= a) {
                res = res - a + te;
            }
        }
        cout << res << "\n";
    }
}