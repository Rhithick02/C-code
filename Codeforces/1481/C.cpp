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
        int n, m, needed = 0, ok = 0;
        cin >> n >> m;
        vector <int> a(n), b(n), c(m), result, need[n+1];
        For(i, 0, n) cin >> a[i];
        For(i, 0, n) {
            cin >> b[i];
            if(a[i] != b[i]) {
                need[b[i]].pb(i+1);
                needed++;
            }
        }
        For(i, 0, m) cin >> c[i];
        For(i, 0, n) {
            if(b[i] == c[m-1]) {
                ok = i + 1;
            }
        }
        if(!ok) {
            goto test;
        }
        for(int i = m-1; i >= 0; i--) {
            if(need[c[i]].size()) {
                result.pb(need[c[i]].back());
                need[c[i]].pop_back();
                needed--;
            } else {
                if(i == m-1) {
                    result.pb(ok);
                } else {
                    result.pb(result[0]);
                }
            }
        }
        if(!needed) {
            cout << "YES\n";
            reverse(asc(result));
            for(auto it: result) cout << it << " ";
            cout << "\n";
        } else {
            test:
            cout << "NO\n";
        }
    }
}