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
    bool ok = false;
    int n, x;
    cin >> n >> x;
    vector <pair<int, int>> ar(n);
    For(i, 0, n) {
        cin >> ar[i].fi;
        ar[i].se = i+1;
    }
    sort(asc(ar));
    For(i, 0, n) {
        For(j, i+1, n) {
            int val = x - ar[i].fi - ar[j].fi;
            if(val <= 0) continue;
            int pos = upper_bound(asc(ar), make_pair(val, mod)) - ar.begin();
            if(ar[pos-1].fi == val && pos-1 != i && pos-1 != j) {
                cout << ar[i].se << " " << ar[j].se << " " << ar[pos-1].se << "\n";
                ok = true;
                break;
            }
        }
        if(ok) break;
    }
    if(!ok) cout << "IMPOSSIBLE\n";
}