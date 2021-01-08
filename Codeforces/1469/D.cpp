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
        lli n, te;
        cin >> n;
        vector <pair<int, int>> ar;
        while(n > 2) {
            te = ceil(1.0 * sqrt(n));
            For(i, te+1, n) ar.pb({i, i+1});
            For(i, 0, 2) ar.pb({n, te});
            n = te;
        }
        cout << ar.size() << "\n";
        for(auto it: ar) cout << it.fi << " " << it.se  << "\n";
    }
}