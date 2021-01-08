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
        int n, res = 0;
        cin >> n;
        vector <pair<int, int>> ar(n);
        For(i, 0, n) cin >> ar[i].fi;
        For(i, 1, n-1) {
            if(ar[i].fi > ar[i-1].fi && ar[i].fi > ar[i+1].fi)
                ar[i].se = 1;
            if(ar[i].fi < ar[i-1].fi && ar[i].fi < ar[i+1].fi)
                ar[i].se = -1;
        }
        int cnt = 0;
        For(i, 1, n-1) {
            if(i+2 != n && ar[i].se && ar[i+1].se && ar[i+2].se) {
                if(ar[i].fi >= ar[i+2].fi && ar[i].se == 1) {
                    cnt = max(cnt, 3);
                } else if(ar[i].fi <= ar[i+2].fi && ar[i].se == -1) {
                    cnt = max(cnt, 3);
                } else {
                    cnt = max(cnt, 2);
                }
            } else if(ar[i].se && ar[i+1].se) {
                if(ar[i].se == 1 && ((ar[i-1].fi <= ar[i+1].fi) || (i+2 != n && ar[i].fi <= ar[i+2].fi))) {
                    cnt = max(cnt, 2);
                } else if(ar[i].se == -1 && ((ar[i-1].fi >= ar[i+1].fi) || (i+2 != n && ar[i].fi >= ar[i+2].fi))) {
                    cnt = max(cnt, 2);
                } else cnt = max(cnt, 1);
            } else if(ar[i].se) {
                cnt = max(cnt, 1);
            }
            if(ar[i].se) res++;
        }
        cout << res - cnt << "\n";
    }
}