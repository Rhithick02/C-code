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

int sq(int x) {
    return x * x;
}
bool ispar(pair<int, int> v1, pair<int, int> v2, pair<int, int> v3) {
    bool ok1 = (v1.fi == v2.fi) || (v1.fi == v3.fi) || (v2.fi == v3.fi);
    bool ok2 = (v1.se == v2.se) || (v1.se == v3.se) || (v2.se == v3.se);
    return ok1 || ok2;
}
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <string> s(n);
        vector <int> ans(10), minr(10, mod), minc(10, mod), maxr(10), maxc(10);
        For(i, 0, n) cin >> s[i];
        For(i, 0, n) {
            For(j, 0, n) {
                int x = s[i][j] - '0';
                minr[x] = min(minr[x], i);
                maxr[x] = max(maxr[x], i);
                minc[x] = min(minc[x], j);
                maxc[x] = max(maxc[x], j);
            }
        }
        For(i, 0, n) {
            For(j, 0, n) {
                int x = s[i][j] - '0';
                ans[x] = max(ans[x], max(maxr[x]-i, i-minr[x]) * max(n-1-j, j));
                ans[x] = max(ans[x], max(maxc[x]-j, j-minc[x]) * max(n-1-i, i));
            }
        }
        For(i, 0, 10) cout << ans[i] << " ";
        cout << "\n";
    }
}