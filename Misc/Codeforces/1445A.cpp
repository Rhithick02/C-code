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
        bool ok = true;
        int n, x;
        cin >> n >> x;
        vector <int> a(n), b(n);
        For(i, 0, n) cin >> a[i];
        For(i, 0, n) cin >> b[i];
        sort(asc(a)), sort(des(b));
        For(i, 0, n) {
            if(a[i] + b[i] > x) {
                ok = false;
                break;
            }
        }
        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }
}
