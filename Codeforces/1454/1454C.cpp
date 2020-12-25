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
        int n, res = 1e9;
        cin >> n;
        vector <pair<int, int>> ar(n);
        For(i, 0, n) {
            cin >> ar[i].fi;
            ar[i].se = i+1;
        }
        sort(asc(ar));
        For(i, 1, n+1) {
            int prev = 0, cnt = 0;
            int pos = upper_bound(asc(ar), make_pair(i, 0)) - ar.begin();
            if(ar[pos].fi != i) continue;
            For(j, pos, n) {
                if(ar[j].fi != i) break;
                if(ar[j].se - prev > 1) cnt++;
                prev = ar[j].se;
            }
            if(n - prev) cnt++;
            res = min(res, cnt);
        }
        cout << res << "\n";
    }
}