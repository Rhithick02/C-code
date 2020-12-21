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
        int n, q, l, r;
        string s;
        cin >> n >> q >> s;
        For(i, 0, q) {
            bool ok = false;
            cin >> l >> r;
            if(r-l+1 >= 2 && r-l+1 != n) {
                For(j, r, n) if(s[j] == s[r-1]) ok = true;
                For(j, 0, l-1) if(s[j] == s[l-1]) ok = true;
                if(ok) cout << "YES\n";
                else cout << "NO\n";
            } else cout << "NO\n";
        }
    }
}