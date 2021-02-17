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
    int t;
    cin >> t;
    while(t--) {
        int n, cnt;
        cin >> n;
        vector <int> ar(n);
        map <int, int> mp, mp_of_mp;
        For(i, 0, n) {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        for(auto it: mp) {
            mp_of_mp[it.se]++;
        }
        vector <pair<int, int>> st;
        for(auto it: mp_of_mp) {
            st.pb(it);
        }
        cnt = n;
        int siz = st.size();
        For(i, 0, siz) {
            int temp = 0;
            For(j, 0, siz) {
                if(st[j].fi < st[i].fi) {
                    temp += st[j].fi * st[j].se;
                } else {
                    temp += st[j].se * (st[j].fi - st[i].fi);
                }
            }
            cnt = min(cnt, temp);
        }
        cout << cnt << "\n";
    }
}