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
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

lli calc(vector <lli> te) {
    lli need = 2e9;
    int n = te.size();
    For(i, 0, n) {
        lli part = 0;
        For(j, 0, n) part += abs(te[i] - te[j]);
        need = min(need, part);
    }
    return need;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        lli n, m, x, res = 0;
        cin >> n >> m;
        vector <lli> ar[n];
        For(i, 0, n) {
            For(j, 0, m) {
                cin >> x;
                ar[i].pb(x);
            }
        }
        For(i, 0, (n + 1)/ 2) {
            For(j, 0, (m + 1) / 2) {
                if(i == n-i-1 && j == m-j-1) continue;
                vector <lli> te;
                if(i != n-i-1 && j != m-j-1) {
                    te.pb(ar[i][j]), te.pb(ar[n-i-1][j]);
                    te.pb(ar[i][m-j-1]), te.pb(ar[n-i-1][m-j-1]);
                } else if(i == n-i-1) {
                    te.pb(ar[i][j]), te.pb(ar[i][m-j-1]);
                } else if(j == m-j-1) {
                    te.pb(ar[i][j]), te.pb(ar[n-i-1][j]);
                }
                res += calc(te);
            }
        }
        cout << res << "\n";
    }
}
