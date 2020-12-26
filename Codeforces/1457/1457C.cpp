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
        int n, p, k, x, y, cost = 2e9;
        cin >> n >> p >> k;
        vector <int> st(n);
        string s;
        cin >> s;
        cin >> x >> y;
        for(int i = n-1; i >= 0; i--) {
            if(i + k < n) {
                st[i] = st[i+k] + !(s[i] - '0');
            } else {
                st[i] = !(s[i] - '0');
            }
        }
        For(i, p-1, n) {
            int te = (i-p+1) * y;
            if(i+1 < n) {
                te = min(x * st[i] + te, te + y + x * st[i+1]);
            } else {
                te = x * st[i] + te;
            }
            cost = min(cost, te);
        }
        cout << cost << "\n";
    }
}