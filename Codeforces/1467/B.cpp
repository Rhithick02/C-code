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

int n;
int ishill(int i, vector <pair<int, int>> &ar) {
    return (i + 1 < n && i > 0 && ar[i].fi > ar[i-1].fi && ar[i].fi > ar[i+1].fi);
}
int isvalley(int i, vector <pair<int, int>> &ar) {
    return (i + 1 < n && i > 0 && ar[i].fi < ar[i-1].fi && ar[i].fi < ar[i+1].fi);
}

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int res = 0;
        cin >> n;
        vector <pair<int, int>> ar(n);
        For(i, 0, n) cin >> ar[i].fi;
        For(i, 1, n-1) {
            if(ishill(i, ar) || isvalley(i, ar)) {
                ar[i].se = 1;
                res++;
            }
        }
        int cnt = res;
        For(i, 1, n-1) {
            int te = ar[i].fi;
            ar[i].fi = ar[i-1].fi;
            int delhil = ishill(i-1, ar) + ishill(i, ar) + ishill(i+1, ar);
            int delval = isvalley(i-1, ar) + isvalley(i, ar) + isvalley(i+1, ar);
            int curch = ar[i].se + ar[i-1].se + ar[i+1].se;
            cnt = min(cnt, res - curch + delhil + delval);
            ar[i].fi = ar[i+1].fi;
            delhil = ishill(i-1, ar) + ishill(i, ar) + ishill(i+1, ar);
            delval = isvalley(i-1, ar) + isvalley(i, ar) + isvalley(i+1, ar);
            curch = ar[i].se + ar[i-1].se + ar[i+1].se;
            cnt = min(cnt, res - curch + delhil + delval);
            ar[i].fi = te;
        }
        cout << cnt << "\n";
    }
}