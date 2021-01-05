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
        lli tot = 0;
        int n, m, tr = 0;
        cin >> n >> m;
        vector <int> ar(n), cost(m);
        For(i, 0, n) cin >> ar[i];
        For(i, 0, m) cin >> cost[i];
        sort(des(ar));
        For(i, 0, n) {
            if(cost[ar[i]-1] > cost[tr]) {
                tot += cost[tr];
                tr++;
            } else {
                tot += cost[ar[i]-1];
            }
        }
        cout << tot << "\n";
    }
}