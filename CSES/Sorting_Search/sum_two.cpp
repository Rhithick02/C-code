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
    int n, x;
    cin >> n >> x;
    vector <pair<int, int>> ar(n);
    For(i, 0, n) {
        cin >> ar[i].fi;
        ar[i].se = i;
    }
    sort(asc(ar));
    For(i, 0, n) {
        int pos = upper_bound(asc(ar), make_pair(x-ar[i].fi, mod)) - ar.begin();
        if(ar[i].se == ar[pos-1].se || !pos) continue;
        if(ar[pos-1].fi + ar[i].fi == x) {
            cout << ar[i].se + 1 << " " << ar[pos-1].se + 1 << " ";
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";
}