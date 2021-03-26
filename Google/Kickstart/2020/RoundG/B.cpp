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
    int t, T;
    cin >> t;
    T = t;
    while(t--) {
        lli sum = 0;
        int n, x;
        cin >> n;
        map <int, lli> mp;
        For(i, 0, n) {
            For(j, 0, n) {
                cin >> x;
                mp[i-j] += x;
            }
        }
        for(auto it: mp) sum = max(sum, it.se);
        cout << "Case #" << T - t << ": " << sum << "\n";
    }
}