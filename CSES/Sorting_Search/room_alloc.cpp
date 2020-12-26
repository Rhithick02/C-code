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
    int n, cnt = 0;
    cin >> n;
    vector <pair<pair<int, int>, int>> ar(n);
    vector <int> ans(n);
    set <pair<int, int>> st;
    For(i, 0, n) {
        cin >> ar[i].fi.fi >> ar[i].fi.se;
        ar[i].se = i;
    }
    sort(asc(ar));
    For(i, 0, n) {
        if(!st.size()) {
            cnt++;
            ans[ar[i].se] = cnt;
            st.insert({ar[i].fi.se, cnt});
        } else {
            pair <int, int> pa = *st.begin();
            if(ar[i].fi.fi > pa.fi) {
                st.erase(st.begin());
                st.insert({ar[i].fi.se, pa.se});
                ans[ar[i].se] = pa.se;
            } else {
                cnt++;
                st.insert({ar[i].fi.se, cnt});
                ans[ar[i].se] = cnt;
            }
        }
    }
    cout << *max_element(asc(ans)) << endl;
    For(i, 0, n) cout << ans[i] << " ";
}